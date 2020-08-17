--- authority/provisioner/jwk.go.orig	2020-08-17 11:46:54 UTC
+++ authority/provisioner/jwk.go
@@ -9,7 +9,7 @@ import (
 	"github.com/pkg/errors"
 	"github.com/smallstep/certificates/errs"
 	"github.com/smallstep/cli/jose"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // jwtPayload extends jwt.Claims with step attributes.
