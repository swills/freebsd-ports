--- vendor/github.com/smallstep/certificates/authority/tls.go.orig	2020-08-17 10:02:27 UTC
+++ vendor/github.com/smallstep/certificates/authority/tls.go
@@ -20,7 +20,7 @@ import (
 	"github.com/smallstep/cli/crypto/tlsutil"
 	x509legacy "github.com/smallstep/cli/crypto/x509util"
 	"github.com/smallstep/cli/jose"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // GetTLSOptions returns the tls options configured.
