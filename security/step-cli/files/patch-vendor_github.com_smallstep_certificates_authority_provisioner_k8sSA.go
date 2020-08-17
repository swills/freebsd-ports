--- vendor/github.com/smallstep/certificates/authority/provisioner/k8sSA.go.orig	2020-08-17 09:49:15 UTC
+++ vendor/github.com/smallstep/certificates/authority/provisioner/k8sSA.go
@@ -13,7 +13,7 @@ import (
 	"github.com/smallstep/certificates/errs"
 	"github.com/smallstep/cli/crypto/pemutil"
 	"github.com/smallstep/cli/jose"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // NOTE: There can be at most one kubernetes service account provisioner configured
