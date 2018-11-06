--- setup.py.orig 2018-12-06 05:19:25 UTC
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
@@ -634,8 +624,6 @@ def package(args, for_bundle=False, sh_launcher=False)
     safe_makedirs(launcher_dir)
     build_linux_launcher(args, launcher_dir, for_bundle, sh_launcher, args.for_freeze)
     if not is_macos:  # {{{ linux desktop gunk
-        copy_man_pages(ddir)
-        copy_html_docs(ddir)
         icdir = os.path.join(ddir, 'share', 'icons', 'hicolor', '256x256', 'apps')
         safe_makedirs(icdir)
         shutil.copy2('logo/kitty.png', icdir)
@@ -822,8 +810,6 @@ def main():
         )
     elif args.action == 'linux-package':
         build(args, native_optimizations=False)
-        if not os.path.exists(os.path.join(base, 'docs/_build/html')):
-            run_tool(['make', 'docs'])
         package(args)
     elif args.action == 'osx-bundle':
         build(args, native_optimizations=False)
