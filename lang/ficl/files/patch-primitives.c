--- primitives.c.orig	2010-09-13 18:43:04 UTC
+++ primitives.c
@@ -487,7 +487,7 @@ static void ficlPrimitiveSprintf(ficlVm *vm) /*  */
 
 	ficlStackPushPointer(vm->dataStack, bufferStart);
 	ficlStackPushInteger(vm->dataStack, buffer - bufferStart);
-	ficlStackPushInteger(vm->dataStack, append && FICL_TRUE);
+	ficlStackPushInteger(vm->dataStack, FICL_BOOL(!append));
 }
 
 
@@ -1350,7 +1350,7 @@ static void ficlPrimitiveSetObjectFlag(ficlVm *vm)
 
 static void ficlPrimitiveIsObject(ficlVm *vm)
 {
-    int flag;
+    ficlInteger flag;
     ficlWord *word = (ficlWord *)ficlStackPopPointer(vm->dataStack);
     
     flag = ((word != NULL) && (word->flags & FICL_WORD_OBJECT)) ? FICL_TRUE : FICL_FALSE;
@@ -2785,8 +2785,8 @@ TO_GLOBAL:
     if (!word)
         ficlVmThrowError(vm, "%.*s not found", FICL_STRING_GET_LENGTH(name), FICL_STRING_GET_POINTER(name));
 
-	switch ((ficlInstruction)word->code)
-	{
+    switch ((ficlInstruction)word->code)
+    {
 		case ficlInstructionConstantParen:
 			instruction = ficlInstructionStore;
 			stack = vm->dataStack;
@@ -2814,7 +2814,7 @@ TO_GLOBAL:
 		    ficlVmThrowError(vm, "to %.*s : value/constant is of unknown type", FICL_STRING_GET_LENGTH(name), FICL_STRING_GET_POINTER(name));
 		    return;
 		}
-	}
+    }
 	
     if (vm->state == FICL_VM_STATE_INTERPRET)
 	{
