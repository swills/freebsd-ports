--- authority/provisioner/options_test.go.orig	2020-08-17 11:47:15 UTC
+++ authority/provisioner/options_test.go
@@ -8,7 +8,7 @@ import (
 	"testing"
 
 	"github.com/smallstep/cli/crypto/pemutil"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 func parseCertificateRequest(t *testing.T, filename string) *x509.CertificateRequest {
