--- command/certificate/create.go.orig	2020-08-17 10:04:13 UTC
+++ command/certificate/create.go
@@ -15,7 +15,7 @@ import (
 	"github.com/smallstep/cli/ui"
 	"github.com/smallstep/cli/utils"
 	"github.com/urfave/cli"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 const (
