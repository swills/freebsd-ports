--- org/eclipse/swt/internal/gtk/OS.java.orig	2019-03-07 05:31:06.000000000 +0100
+++ org/eclipse/swt/internal/gtk/OS.java	2019-06-16 12:10:12.002351000 +0200
@@ -53,15 +53,16 @@
  */
 public class OS extends C {
 	/** OS Constants */
-	public static final boolean IsLinux, IsWin32, BIG_ENDIAN;
+	public static final boolean IsLinux, IsWin32, BIG_ENDIAN, IsFreeBSD;
 	static {
 
 		/* Initialize the OS flags and locale constants */
 		String osName = System.getProperty ("os.name");
-		boolean isLinux = false, isWin32 = false;
+		boolean isLinux = false, isWin32 = false, isFreeBSD = false;
 		if (osName.equals ("Linux")) isLinux = true;
 		if (osName.startsWith("Windows")) isWin32 = true;
-		IsLinux = isLinux;  IsWin32 = isWin32;
+		if (osName.equals ("FreeBSD")) isFreeBSD = true;
+		IsLinux = isLinux;  IsWin32 = isWin32;  IsFreeBSD = isFreeBSD;
 
 		byte[] buffer = new byte[4];
 		long /*int*/ ptr = C.malloc(4);
