--- src/test/cpp/xml/domtestcase.cpp.orig	2018-05-30 13:51:07 UTC
+++ src/test/cpp/xml/domtestcase.cpp
@@ -190,9 +190,9 @@ LOGUNIT_CLASS(DOMTestCase) (public)
                 DOMConfigurator::configure(LOG4CXX_TEST_STR("input/xml/DOMTestCase3.xml"));
                 LOG4CXX_INFO(logger, "File name is expected to end with a superscript 3");
 #if LOG4CXX_LOGCHAR_IS_UTF8
-                const logchar fname[] = { 0x6F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2F, 0x64, 0x6F, 0x6D, 0xC2, 0xB3, 0 };
+                const logchar fname[] = { 0x6F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2F, 0x64, 0x6F, 0x6D, static_cast<logchar>(0xC2), static_cast<logchar>(0xB3), 0 };
 #else
-                const logchar fname[] = { 0x6F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2F, 0x64, 0x6F, 0x6D, 0xB3, 0 };
+                const logchar fname[] = { 0x6F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2F, 0x64, 0x6F, 0x6D, static_cast<logchar>(0xB3), 0 };
 #endif
                 File file;
                 file.setPath(fname);
@@ -209,7 +209,7 @@ LOGUNIT_CLASS(DOMTestCase) (public)
                 DOMConfigurator::configure(LOG4CXX_TEST_STR("input/xml/DOMTestCase4.xml"));
                 LOG4CXX_INFO(logger, "File name is expected to end with an ideographic 4");
 #if LOG4CXX_LOGCHAR_IS_UTF8
-                const logchar fname[] = { 0x6F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2F, 0x64, 0x6F, 0x6D, 0xE3, 0x86, 0x95, 0 };
+                const logchar fname[] = { 0x6F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2F, 0x64, 0x6F, 0x6D, static_cast<logchar>(0xE3), static_cast<logchar>(0x86), static_cast<logchar>(0x95), 0 };
 #else
                 const logchar fname[] = { 0x6F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2F, 0x64, 0x6F, 0x6D, 0x3195, 0 };
 #endif
