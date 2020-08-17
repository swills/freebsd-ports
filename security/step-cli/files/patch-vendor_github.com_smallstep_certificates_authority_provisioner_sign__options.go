--- vendor/github.com/smallstep/certificates/authority/provisioner/sign_options.go.orig	2020-08-17 09:49:52 UTC
+++ vendor/github.com/smallstep/certificates/authority/provisioner/sign_options.go
@@ -14,7 +14,7 @@ import (
 	"time"
 
 	"github.com/pkg/errors"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 // DefaultCertValidity is the default validity for a certificate if none is specified.
