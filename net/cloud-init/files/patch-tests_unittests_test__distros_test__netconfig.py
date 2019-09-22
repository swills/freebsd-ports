--- tests/unittests/test_distros/test_netconfig.py.orig	2019-07-17 16:30:07 UTC
+++ tests/unittests/test_distros/test_netconfig.py
@@ -1,5 +1,6 @@
 # This file is part of cloud-init. See LICENSE file for license information.
 
+import copy
 import os
 from six import StringIO
 from textwrap import dedent
@@ -14,7 +15,7 @@ from cloudinit.distros.parsers.sys_conf import SysConf
 from cloudinit import helpers
 from cloudinit import settings
 from cloudinit.tests.helpers import (
-    FilesystemMockingTestCase, dir2dict, populate_dir)
+    FilesystemMockingTestCase, dir2dict)
 from cloudinit import util
 
 
@@ -213,128 +214,95 @@ class TestNetCfgDistroBase(FilesystemMockingTestCase):
             self.assertEqual(v, b2[k])
 
 
-class TestNetCfgDistroFreebsd(TestNetCfgDistroBase):
+class TestNetCfgDistroFreeBSD(TestNetCfgDistroBase):
 
-    frbsd_ifout = """\
-hn0: flags=8843<UP,BROADCAST,RUNNING,SIMPLEX,MULTICAST> metric 0 mtu 1500
-        options=51b<RXCSUM,TXCSUM,VLAN_MTU,VLAN_HWTAGGING,TSO4,LRO>
-        ether 00:15:5d:4c:73:00
-        inet6 fe80::215:5dff:fe4c:7300%hn0 prefixlen 64 scopeid 0x2
-        inet 10.156.76.127 netmask 0xfffffc00 broadcast 10.156.79.255
-        nd6 options=23<PERFORMNUD,ACCEPT_RTADV,AUTO_LINKLOCAL>
-        media: Ethernet autoselect (10Gbase-T <full-duplex>)
-        status: active
-"""
+    def setUp(self):
+        super(TestNetCfgDistroFreeBSD, self).setUp()
+        self.distro = self._get_distro('freebsd', renderers=['freebsd'])
 
-    @mock.patch('cloudinit.distros.freebsd.Distro.get_ifconfig_list')
-    @mock.patch('cloudinit.distros.freebsd.Distro.get_ifconfig_ifname_out')
-    def test_get_ip_nic_freebsd(self, ifname_out, iflist):
-        frbsd_distro = self._get_distro('freebsd')
-        iflist.return_value = "lo0 hn0"
-        ifname_out.return_value = self.frbsd_ifout
-        res = frbsd_distro.get_ipv4()
-        self.assertEqual(res, ['lo0', 'hn0'])
-        res = frbsd_distro.get_ipv6()
-        self.assertEqual(res, [])
+    def _apply_and_verify_freebsd(self, apply_fn, config, expected_cfgs=None,
+                                  bringup=False):
+        if not expected_cfgs:
+            raise ValueError('expected_cfg must not be None')
 
-    @mock.patch('cloudinit.distros.freebsd.Distro.get_ifconfig_ether')
-    @mock.patch('cloudinit.distros.freebsd.Distro.get_ifconfig_ifname_out')
-    @mock.patch('cloudinit.distros.freebsd.Distro.get_interface_mac')
-    def test_generate_fallback_config_freebsd(self, mac, ifname_out, if_ether):
-        frbsd_distro = self._get_distro('freebsd')
+        tmpd = None
+        with mock.patch('cloudinit.net.freebsd.available') as m_avail:
+            m_avail.return_value = True
+            with self.reRooted(tmpd) as tmpd:
+                util.ensure_dir('/etc')
+                util.ensure_file('/etc/rc.conf')
+                util.ensure_file('/etc/resolv.conf')
+                apply_fn(config, bringup)
 
-        if_ether.return_value = 'hn0'
-        ifname_out.return_value = self.frbsd_ifout
-        mac.return_value = '00:15:5d:4c:73:00'
-        res = frbsd_distro.generate_fallback_config()
-        self.assertIsNotNone(res)
+        results = dir2dict(tmpd)
+        for cfgpath, expected in expected_cfgs.items():
+            print("----------")
+            print(expected)
+            print("^^^^ expected | rendered VVVVVVV")
+            print(results[cfgpath])
+            print("----------")
+            self.assertEqual(
+                set(expected.split('\n')),
+                set(results[cfgpath].split('\n')))
+            self.assertEqual(0o644, get_mode(cfgpath, tmpd))
 
-    def test_simple_write_freebsd(self):
-        fbsd_distro = self._get_distro('freebsd')
+    @mock.patch('cloudinit.net.get_interfaces_by_mac')
+    def test_apply_network_config_freebsd_standard(self, ifaces_mac):
+        ifaces_mac.return_value = {
+            '00:15:5d:4c:73:00': 'eth0',
+        }
+        rc_conf_expected = """\
+defaultrouter=192.168.1.254
+ifconfig_eth0='192.168.1.5 netmask 255.255.255.0'
+ifconfig_eth1=DHCP
+"""
 
-        rc_conf = '/etc/rc.conf'
-        read_bufs = {
-            rc_conf: 'initial-rc-conf-not-validated',
-            '/etc/resolv.conf': 'initial-resolv-conf-not-validated',
+        expected_cfgs = {
+            '/etc/rc.conf': rc_conf_expected,
+            '/etc/resolv.conf': ''
         }
+        self._apply_and_verify_freebsd(self.distro.apply_network_config,
+                                       V1_NET_CFG,
+                                       expected_cfgs=expected_cfgs.copy())
 
-        tmpd = self.tmp_dir()
-        populate_dir(tmpd, read_bufs)
-        with self.reRooted(tmpd):
-            with mock.patch("cloudinit.distros.freebsd.util.subp",
-                            return_value=('vtnet0', '')):
-                fbsd_distro.apply_network(BASE_NET_CFG, False)
-                results = dir2dict(tmpd)
+    @mock.patch('cloudinit.net.get_interfaces_by_mac')
+    def test_apply_network_config_freebsd_ifrename(self, ifaces_mac):
+        ifaces_mac.return_value = {
+            '00:15:5d:4c:73:00': 'vtnet0',
+        }
+        rc_conf_expected = """\
+ifconfig_vtnet0_name=eth0
+defaultrouter=192.168.1.254
+ifconfig_eth0='192.168.1.5 netmask 255.255.255.0'
+ifconfig_eth1=DHCP
+"""
 
-        self.assertIn(rc_conf, results)
-        self.assertCfgEquals(
-            dedent('''\
-                ifconfig_vtnet0="192.168.1.5 netmask 255.255.255.0"
-                ifconfig_vtnet1="DHCP"
-                defaultrouter="192.168.1.254"
-                '''), results[rc_conf])
-        self.assertEqual(0o644, get_mode(rc_conf, tmpd))
+        V1_NET_CFG_RENAME = copy.deepcopy(V1_NET_CFG)
+        V1_NET_CFG_RENAME['config'][0]['mac_address'] = '00:15:5d:4c:73:00'
 
-    def test_simple_write_freebsd_from_v2eni(self):
-        fbsd_distro = self._get_distro('freebsd')
-
-        rc_conf = '/etc/rc.conf'
-        read_bufs = {
-            rc_conf: 'initial-rc-conf-not-validated',
-            '/etc/resolv.conf': 'initial-resolv-conf-not-validated',
+        expected_cfgs = {
+            '/etc/rc.conf': rc_conf_expected,
+            '/etc/resolv.conf': ''
         }
+        self._apply_and_verify_freebsd(self.distro.apply_network_config,
+                                       V1_NET_CFG_RENAME,
+                                       expected_cfgs=expected_cfgs.copy())
 
-        tmpd = self.tmp_dir()
-        populate_dir(tmpd, read_bufs)
-        with self.reRooted(tmpd):
-            with mock.patch("cloudinit.distros.freebsd.util.subp",
-                            return_value=('vtnet0', '')):
-                fbsd_distro.apply_network(BASE_NET_CFG_FROM_V2, False)
-                results = dir2dict(tmpd)
-
-        self.assertIn(rc_conf, results)
-        self.assertCfgEquals(
-            dedent('''\
-                ifconfig_vtnet0="192.168.1.5 netmask 255.255.255.0"
-                ifconfig_vtnet1="DHCP"
-                defaultrouter="192.168.1.254"
-                '''), results[rc_conf])
-        self.assertEqual(0o644, get_mode(rc_conf, tmpd))
-
-    def test_apply_network_config_fallback_freebsd(self):
-        fbsd_distro = self._get_distro('freebsd')
-
-        # a weak attempt to verify that we don't have an implementation
-        # of _write_network_config or apply_network_config in fbsd now,
-        # which would make this test not actually test the fallback.
-        self.assertRaises(
-            NotImplementedError, fbsd_distro._write_network_config,
-            BASE_NET_CFG)
-
-        # now run
-        mynetcfg = {
-            'config': [{"type": "physical", "name": "eth0",
-                        "mac_address": "c0:d6:9f:2c:e8:80",
-                        "subnets": [{"type": "dhcp"}]}],
-            'version': 1}
-
-        rc_conf = '/etc/rc.conf'
-        read_bufs = {
-            rc_conf: 'initial-rc-conf-not-validated',
-            '/etc/resolv.conf': 'initial-resolv-conf-not-validated',
+    @mock.patch('cloudinit.net.get_interfaces_by_mac')
+    def test_apply_network_config_freebsd_nameserver(self, ifaces_mac):
+        ifaces_mac.return_value = {
+            '00:15:5d:4c:73:00': 'eth0',
         }
 
-        tmpd = self.tmp_dir()
-        populate_dir(tmpd, read_bufs)
-        with self.reRooted(tmpd):
-            with mock.patch("cloudinit.distros.freebsd.util.subp",
-                            return_value=('vtnet0', '')):
-                fbsd_distro.apply_network_config(mynetcfg, bring_up=False)
-                results = dir2dict(tmpd)
-
-        self.assertIn(rc_conf, results)
-        self.assertCfgEquals('ifconfig_vtnet0="DHCP"', results[rc_conf])
-        self.assertEqual(0o644, get_mode(rc_conf, tmpd))
+        V1_NET_CFG_DNS = copy.deepcopy(V1_NET_CFG)
+        ns = ['1.2.3.4']
+        V1_NET_CFG_DNS['config'][0]['subnets'][0]['dns_nameservers'] = ns
+        expected_cfgs = {
+            '/etc/resolv.conf': 'nameserver 1.2.3.4\n'
+        }
+        self._apply_and_verify_freebsd(self.distro.apply_network_config,
+                                       V1_NET_CFG_DNS,
+                                       expected_cfgs=expected_cfgs.copy())
 
 
 class TestNetCfgDistroUbuntuEni(TestNetCfgDistroBase):
