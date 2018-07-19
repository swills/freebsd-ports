From 89ba86602ffe4c27f4498c11f18abf3e3d417d92 Mon Sep 17 00:00:00 2001
From: Fabian Keil <fk@fabiankeil.de>
Date: Sat, 5 Aug 2017 10:52:23 +0200
Subject: [PATCH 1/2] salt/modules/freebsd_sysctl.py: Figure out the available
 sysctl roots automatically

show() requires a complete list of sysctl roots to properly parse
sysctl values that are split across multiple lines. Every line of
the "sysctl -ae" output that doesn't start with the name of a known
sysctl root is treated as continuation of the previous line.

Previously the kstat sysctl root was unknown and this resulted in
whole kstat tree getting add to the p1003_1b.timer_max value:

    fk@electrobsd ~ $salt-ssh salt-client-1 sysctl.show
    [...]
        p1003_1b.synchronized_io:
            0
        p1003_1b.timer_max:
            32kstat.zfs.misc.vdev_cache_stats.misses=0
            kstat.zfs.misc.vdev_cache_stats.hits=0
            kstat.zfs.misc.vdev_cache_stats.delegations=0
            kstat.zfs.misc.arcstats.demand_hit_predictive_prefetch=0
    [...]
            kstat.zfs.misc.zio_trim.failed=0
            kstat.zfs.misc.zio_trim.unsupported=0
            kstat.zfs.misc.zio_trim.success=0
            kstat.zfs.misc.zio_trim.bytes=0
        p1003_1b.timers:
            200112
        security.bsd.conservative_signals:
            1
    [...]

Detecting the available sysctl roots automatically avoids the problem.
---
 salt/modules/freebsd_sysctl.py | 26 +++++++++++---------------
 1 file changed, 11 insertions(+), 15 deletions(-)

diff --git salt/modules/freebsd_sysctl.py salt/modules/freebsd_sysctl.py
index 05119f40c4..0f65123092 100644
--- salt/modules/freebsd_sysctl.py
+++ salt/modules/freebsd_sysctl.py
@@ -37,6 +37,16 @@ def _formatfor(name, value, config, tail=''):
     else:
         return '{0}={1}{2}'.format(name, value, tail)
 
+def _get_sysctl_roots():
+    sysctl_roots = []
+    sysctl = salt.utils.which('sysctl')
+    out = __salt__['cmd.run']('{0} -aN'.format(sysctl), output_loglevel='trace')
+
+    for line in out.splitlines():
+        sysctl_root = line.split('.')[0]
+        if sysctl_root not in (sysctl_roots):
+            sysctl_roots.append(sysctl_root)
+    return sysctl_roots
 
 def show(config_file=False):
     '''
@@ -48,21 +58,6 @@ def show(config_file=False):
 
         salt '*' sysctl.show
     '''
-    roots = (
-        'compat',
-        'debug',
-        'dev',
-        'hptmv',
-        'hw',
-        'kern',
-        'machdep',
-        'net',
-        'p1003_1b',
-        'security',
-        'user',
-        'vfs',
-        'vm'
-    )
     cmd = 'sysctl -ae'
     ret = {}
     comps = ['']
@@ -80,6 +75,7 @@ def show(config_file=False):
             log.error('Could not open sysctl config file')
             return None
     else:
+        roots = _get_sysctl_roots()
         out = __salt__['cmd.run'](cmd, output_loglevel='trace')
         for line in out.splitlines():
             if any([line.startswith('{0}.'.format(root)) for root in roots]):
-- 
2.14.1


From 1515f38d64b0e4dc995aa611f7aa8128caf10c2c Mon Sep 17 00:00:00 2001
From: Fabian Keil <fk@fabiankeil.de>
Date: Sat, 5 Aug 2017 12:54:25 +0200
Subject: [PATCH 2/2] salt/modules/freebsd_sysctl.py: Fix multi-line values in
 the sysctl.show output

Previously the linebreak between the first two lines got lost for
multi-line values whose first line starts on the same line as the
sysctl name. Additionally multi-line values got an empty line added
to the end.

Before:
    fk@electrobsd ~ $salt-call --local sysctl.show
        [...]
        kern.geom.confxml:
            <mesh>  <class id="0xffffffff81b33358">
                <name>ELI</name>
        [...]
        hw.dri.0.vm:
            slot offset	        size       type flags address            mtrr
               0 0x00000000f0000000 0x00200000  REG  0x88 0xfffff800f0000000 no

        hw.dri.0.wedged:

After:
    fk@electrobsd ~ $salt-call --local sysctl.show
        [...]
        kern.geom.confxml:
            <mesh>
              <class id="0xffffffff81b33358">
                <name>ELI</name>
        [...]
        hw.dri.0.vm:
            slot offset	        size       type flags address            mtrr
               0 0x00000000f0000000 0x00200000  REG  0x88 0xfffff800f0000000 no
        hw.dri.0.wedged:
---
 salt/modules/freebsd_sysctl.py | 5 ++++-
 1 file changed, 4 insertions(+), 1 deletion(-)

diff --git salt/modules/freebsd_sysctl.py salt/modules/freebsd_sysctl.py
index 0f65123092..b82ea2b124 100644
--- salt/modules/freebsd_sysctl.py
+++ salt/modules/freebsd_sysctl.py
@@ -82,7 +82,10 @@ def show(config_file=False):
                 comps = line.split('=', 1)
                 ret[comps[0]] = comps[1]
             elif comps[0]:
-                ret[comps[0]] += '{0}\n'.format(line)
+                # Add a new line character unless the value is empty
+                if len(ret[comps[0]].strip()) != 0:
+                    ret[comps[0]] += '\n'
+                ret[comps[0]] += line
             else:
                 continue
         return ret
-- 
2.14.1

