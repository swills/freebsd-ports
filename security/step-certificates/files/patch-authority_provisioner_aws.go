--- authority/provisioner/aws.go.orig	2020-08-17 11:46:30 UTC
+++ authority/provisioner/aws.go
@@ -18,7 +18,7 @@ import (
 	"github.com/pkg/errors"
 	"github.com/smallstep/certificates/errs"
 	"github.com/smallstep/cli/jose"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // awsIssuer is the string used as issuer in the generated tokens.
