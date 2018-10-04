--- dbms/src/Common/getNumberOfPhysicalCPUCores.cpp.orig	2018-09-19 03:02:31 UTC
+++ dbms/src/Common/getNumberOfPhysicalCPUCores.cpp
@@ -1,10 +1,10 @@
-#include <Common/getNumberOfPhysicalCPUCores.h>
+#include "getNumberOfPhysicalCPUCores.h"
 #include <thread>
 
-#if defined(__x86_64__)
+#if defined(__x86_64__) || defined(__amd64__)
 
     #include <libcpuid/libcpuid.h>
-    #include <Common/Exception.h>
+    #include "Exception.h"
 
     namespace DB { namespace ErrorCodes { extern const int CPUID_ERROR; }}
 
@@ -13,7 +13,7 @@
 
 unsigned getNumberOfPhysicalCPUCores()
 {
-#if defined(__x86_64__)
+#if defined(__x86_64__) || defined(__amd64__)
     cpu_raw_data_t raw_data;
     if (0 != cpuid_get_raw_data(&raw_data))
         throw DB::Exception("Cannot cpuid_get_raw_data: " + std::string(cpuid_error()), DB::ErrorCodes::CPUID_ERROR);
