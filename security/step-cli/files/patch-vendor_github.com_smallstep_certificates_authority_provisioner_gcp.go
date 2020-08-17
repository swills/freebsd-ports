--- vendor/github.com/smallstep/certificates/authority/provisioner/gcp.go.orig	2020-08-17 09:48:59 UTC
+++ vendor/github.com/smallstep/certificates/authority/provisioner/gcp.go
@@ -16,7 +16,7 @@ import (
 	"github.com/pkg/errors"
 	"github.com/smallstep/certificates/errs"
 	"github.com/smallstep/cli/jose"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // gcpCertsURL is the url that serves Google OAuth2 public keys.
