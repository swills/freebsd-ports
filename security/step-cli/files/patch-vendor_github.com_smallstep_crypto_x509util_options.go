--- vendor/github.com/smallstep/crypto/x509util/options.go.orig	2020-08-17 11:33:08 UTC
+++ vendor/github.com/smallstep/crypto/x509util/options.go
@@ -9,7 +9,7 @@ import (
 
 	"github.com/Masterminds/sprig/v3"
 	"github.com/pkg/errors"
-	"go.step.sm/crypto/internal/step"
+	"github.com/smallstep/crypto/internal/step"
 )
 
 // getFuncMap returns the list of functions provided by sprig. It changes the
