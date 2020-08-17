--- authority/provisioner/options.go.orig	2020-08-17 11:47:26 UTC
+++ authority/provisioner/options.go
@@ -6,7 +6,7 @@ import (
 
 	"github.com/pkg/errors"
 	"github.com/smallstep/cli/jose"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // CertificateOptions is an interface that returns a list of options passed when
