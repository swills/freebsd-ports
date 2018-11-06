--- setup.py.orig 2018-12-06 05:25:15 UTC
+++ setup.py
@@ -600,16 +600,6 @@ def package(args, for_bundle=False, sh_launcher=False)
     if os.path.exists(libdir):
         shutil.rmtree(libdir)
     os.makedirs(os.path.join(libdir, 'logo'))
-    for x in (libdir, os.path.join(ddir, 'share')):
-        odir = os.path.join(x, 'terminfo')
-        safe_makedirs(odir)
-        proc = subprocess.run(['tic', '-x', '-o' + odir, 'terminfo/kitty.terminfo'], check=True, stderr=subprocess.PIPE)
-        regex = '^"terminfo/kitty.terminfo", line [0-9]+, col [0-9]+, terminal \'xterm-kitty\': older tic versions may treat the description field as an alias$'
-        for error in proc.stderr.decode('utf-8').splitlines():
-            if not re.match(regex, error):
-                print(error, file=sys.stderr)
-        if not glob.glob(os.path.join(odir, '*/xterm-kitty')):
-            raise SystemExit('tic failed to output the compiled kitty terminfo file')
     shutil.copy2('__main__.py', libdir)
     shutil.copy2('logo/kitty.rgba', os.path.join(libdir, 'logo'))
     shutil.copy2('logo/beam-cursor.png', os.path.join(libdir, 'logo'))
@@ -823,7 +813,7 @@ def main():
     elif args.action == 'linux-package':
         build(args, native_optimizations=False)
         if not os.path.exists(os.path.join(base, 'docs/_build/html')):
-            run_tool(['make', 'docs'])
+            run_tool(['gmake', 'docs'])
         package(args)
     elif args.action == 'osx-bundle':
         build(args, native_optimizations=False)
