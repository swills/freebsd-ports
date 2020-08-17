--- vendor/github.com/smallstep/certificates/authority/provisioner/oidc.go.orig	2020-08-17 09:49:23 UTC
+++ vendor/github.com/smallstep/certificates/authority/provisioner/oidc.go
@@ -14,7 +14,7 @@ import (
 	"github.com/pkg/errors"
 	"github.com/smallstep/certificates/errs"
 	"github.com/smallstep/cli/jose"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // openIDConfiguration contains the necessary properties in the
