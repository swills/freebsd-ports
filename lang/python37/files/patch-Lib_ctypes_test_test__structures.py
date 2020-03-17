bpo-16575: Disabled checks for union types being passed by value. 

https://github.com/python/cpython/pull/17960

databases/grass7 wxPython gui needs this patch
Context here: https://trac.osgeo.org/grass/ticket/4015

--- Lib/ctypes/test/test_structures.py.orig	2020-03-01 17:40:30 UTC
+++ Lib/ctypes/test/test_structures.py
@@ -532,6 +532,7 @@ class StructureTestCase(unittest.TestCase):
             self.assertEqual(f2, [0x4567, 0x0123, 0xcdef, 0x89ab,
                                   0x3210, 0x7654, 0xba98, 0xfedc])
 
+    @unittest.skipIf(True, 'Test disabled for now - see bpo-16575/bpo-16576')
     def test_union_by_value(self):
         # See bpo-16575
 
@@ -612,7 +613,7 @@ class StructureTestCase(unittest.TestCase):
         self.assertEqual(test5.nested.an_int, 0)
         self.assertEqual(test5.another_int, 0)
 
-    #@unittest.skipIf('s390' in MACHINE, 'Test causes segfault on S390')
+    @unittest.skipIf(True, 'Test disabled for now - see bpo-16575/bpo-16576')
     def test_bitfield_by_value(self):
         # See bpo-16576
 
