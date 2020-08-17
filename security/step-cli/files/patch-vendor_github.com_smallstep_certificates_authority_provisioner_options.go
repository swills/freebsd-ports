--- vendor/github.com/smallstep/certificates/authority/provisioner/options.go.orig	2020-08-17 09:49:42 UTC
+++ vendor/github.com/smallstep/certificates/authority/provisioner/options.go
@@ -6,7 +6,7 @@ import (
 
 	"github.com/pkg/errors"
 	"github.com/smallstep/cli/jose"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // CertificateOptions is an interface that returns a list of options passed when
