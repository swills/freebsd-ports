From ef9199cc9bccb77b1a7923c9236d5c384ac9710a Mon Sep 17 00:00:00 2001
From: Fabian Keil <fk@fabiankeil.de>
Date: Sun, 6 Aug 2017 15:39:00 +0200
Subject: [PATCH 1/2] salt/modules/at.py: Add limited support for FreeBSD's at

---
 salt/modules/at.py | 18 ++++++++++++++++++
 1 file changed, 18 insertions(+)

diff --git salt/modules/at.py salt/modules/at.py
index 5a27e5b5ee..a2d5961202 100644
--- salt/modules/at.py
+++ salt/modules/at.py
@@ -101,6 +101,24 @@ def atq(tag=None):
         if __grains__['os_family'] == 'RedHat':
             job, spec = line.split('\t')
             specs = spec.split()
+        elif __grains__['os_family'] == 'FreeBSD':
+            # Expected output:
+            # Date				Owner		Queue	Job#
+            # Sun Aug  6 16:00:00 CEST 2017	root            c	4
+            # Sun Aug  6 16:04:00 CEST 2017	root            c	5
+            if line.startswith('Date'):
+                continue
+            else:
+                tmp = line.split()
+                timestr = ' '.join(tmp[1:6])
+                owner = tmp[6]
+                queue = tmp[7]
+                job = tmp[8]
+                specs = datetime.datetime(*(time.strptime(timestr,
+                    '%b %d %H:%M:%S %Z %Y')[0:5])).isoformat().split('T')
+                specs.append(queue)
+                specs.append(owner)
+
         elif __grains__['os'] in BSD:
             if line.startswith(' Rank'):
                 continue
-- 
2.14.1


From 5555b7e42ca084efb4c61fef9b871de5756fca7f Mon Sep 17 00:00:00 2001
From: Fabian Keil <fk@fabiankeil.de>
Date: Sun, 6 Aug 2017 14:48:02 +0200
Subject: [PATCH 2/2] salt/modules/at.py: Treat every "at" output starting with
 "at: " as error message

This has only been tested with FreeBSD's "at" (on ElectroBSD) but
isn't expected to cause problems with any other "at" implementations
and therefore isn't protected by a "__grains__['os_family'] == 'FreeBSD'"
check for now.
---
 salt/modules/at.py | 3 +++
 1 file changed, 3 insertions(+)

diff --git salt/modules/at.py salt/modules/at.py
index a2d5961202..2534e18a6b 100644
--- salt/modules/at.py
+++ salt/modules/at.py
@@ -250,6 +250,9 @@ def at(*args, **kwargs):  # pylint: disable=C0103
     if output.endswith('Garbled time'):
         return {'jobs': [], 'error': 'invalid timespec'}
 
+    if output.startswith('at: '):
+        return {'jobs': [], 'error': output[4:]}
+
     if output.startswith('warning: commands'):
         output = output.splitlines()[1]
 
-- 
2.14.1

