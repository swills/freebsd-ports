--- authority/provisioner/x5c.go.orig	2020-08-17 11:47:39 UTC
+++ authority/provisioner/x5c.go
@@ -10,7 +10,7 @@ import (
 	"github.com/pkg/errors"
 	"github.com/smallstep/certificates/errs"
 	"github.com/smallstep/cli/jose"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // x5cPayload extends jwt.Claims with step attributes.
