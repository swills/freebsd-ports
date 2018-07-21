--- DNS/Base.py.orig	2016-10-07 01:50:40 UTC
+++ DNS/Base.py
@@ -93,7 +93,7 @@ class DnsRequest:
     """ high level Request object """
     def __init__(self,*name,**args):
         self.donefunc=None
-        self.async=None
+        self.py3async=None
         self.defaults = {}
         self.argparse(name,args)
         self.defaults = self.args
@@ -273,7 +273,7 @@ class DnsRequest:
                 self.sendTCPRequest(server)
         except socket.error as reason:
             raise SocketError(reason)
-        if self.async:
+        if self.py3async:
             return None
         else:
             return self.response
@@ -325,7 +325,7 @@ class DnsRequest:
                 self.sendTCPRequest(server)
         except socket.error as reason:
             raise SocketError(reason)
-        if self.async:
+        if self.py3async:
             return None
         else:
             return self.response
@@ -346,7 +346,7 @@ class DnsRequest:
                     # TODO. Handle timeouts &c correctly (RFC)
                     self.time_start=time.time()
                     self.conn()
-                    if not self.async:
+                    if not self.py3async:
                         self.s.send(self.request)
                         r=self.processUDPReply()
                         # Since we bind to the source port and connect to the
@@ -359,7 +359,7 @@ class DnsRequest:
                         self.response = r
                         # FIXME: check waiting async queries
                 finally:
-                    if not self.async:
+                    if not self.py3async:
                         self.s.close()
             except socket.error as e:
                 # Keep trying more nameservers, but preserve the first error
@@ -428,7 +428,7 @@ class DnsAsyncRequest(DnsRequest,asyncor
         else:
             self.donefunc=self.showResult
         #self.realinit(name,args) # XXX todo
-        self.async=1
+        self.py3async=1
     def conn(self):
         self.getSource()
         self.connect((self.ns,self.port))
