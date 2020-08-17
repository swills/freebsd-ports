--- authority/provisioner/azure.go.orig	2020-08-17 11:46:38 UTC
+++ authority/provisioner/azure.go
@@ -15,7 +15,7 @@ import (
 	"github.com/pkg/errors"
 	"github.com/smallstep/certificates/errs"
 	"github.com/smallstep/cli/jose"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // azureOIDCBaseURL is the base discovery url for Microsoft Azure tokens.
