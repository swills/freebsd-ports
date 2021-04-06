--- rtl/bsd/bunxsysc.inc.orig	2015-07-14 21:58:27 UTC
+++ rtl/bsd/bunxsysc.inc
@@ -374,39 +374,10 @@ begin
  FPutime:=do_syscall(syscall_nr_utimes,TSysParam(path),TSysParam(tvp));
 end;
 
-function __pipe_call(sysnr:TSysParam):TSysResult; {$ifdef cpui386}oldfpccall{$endif} external name 'FPC_DOSYS0';
-
-{$if defined(freebsd) or defined (dragonfly)}
-  {$define PIPE_RESULT_IN_EAX_AND_EDX}
-{$endif}
 Function FPpipe(var fildes : tfildes):cint;
-{$ifndef PIPE_RESULT_IN_EAX_AND_EDX}
 begin
-  fppipe:=do_syscall(syscall_nr_pipe,TSysParam(@fildes));
+  FPpipe:=do_syscall(syscall_nr_pipe2,TSysParam(@fildes),0);
 end;
-{$else}
-var
-  a, b: cInt;
-begin
-  asm
-  {$ifdef CPUi386}
-    pushl syscall_nr_pipe
-    call __pipe_call
-    movl %eax, a
-    movl %edx, b
-  {$else}
-    movq syscall_nr_pipe, %rdi
-    call __pipe_call
-    movl %eax, a
-    movl %edx, b
-  {$endif}
-  end;
-
-  fpPipe := a; // eax is in a, no matter if it worked or not
-  fildes[0] := a;
-  fildes[1] := b;
-end;
-{$endif}
 
 function FPfcntl(fildes:cint;Cmd:cint;Arg:cint):cint;
 
