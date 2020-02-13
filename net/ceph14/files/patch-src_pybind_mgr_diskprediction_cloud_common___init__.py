diff --git a/src/pybind/mgr/diskprediction_cloud/common/__init__.py b/src/pybind/mgr/diskprediction_cloud/common/__init__.py
index ce5131b8f2..d828f3ee89 100644
--- src/pybind/mgr/diskprediction_cloud/common/__init__.py
+++ src/pybind/mgr/diskprediction_cloud/common/__init__.py
@@ -29,7 +29,7 @@ class TimeoutError(Exception):
     pass
 
 
-def timeout(seconds=10, error_message=os.strerror(errno.ETIME)):
+def timeout(seconds=10, error_message=os.strerror(errno.ETIMEDOUT)):
     def decorator(func):
         def _handle_timeout(signum, frame):
             raise TimeoutError(error_message)
