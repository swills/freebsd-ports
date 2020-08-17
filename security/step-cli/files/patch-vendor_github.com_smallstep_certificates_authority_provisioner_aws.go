--- vendor/github.com/smallstep/certificates/authority/provisioner/aws.go.orig	2020-08-17 09:31:44 UTC
+++ vendor/github.com/smallstep/certificates/authority/provisioner/aws.go
@@ -18,7 +18,7 @@ import (
 	"github.com/pkg/errors"
 	"github.com/smallstep/certificates/errs"
 	"github.com/smallstep/cli/jose"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // awsIssuer is the string used as issuer in the generated tokens.
