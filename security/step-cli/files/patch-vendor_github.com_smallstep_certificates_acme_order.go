--- vendor/github.com/smallstep/certificates/acme/order.go.orig	2020-08-17 10:01:26 UTC
+++ vendor/github.com/smallstep/certificates/acme/order.go
@@ -11,7 +11,7 @@ import (
 	"github.com/pkg/errors"
 	"github.com/smallstep/certificates/authority/provisioner"
 	"github.com/smallstep/nosql"
-	"go.step.sm/crypto/x509util"
+	"github.com/smallstep/crypto/x509util"
 )
 
 var defaultOrderExpiry = time.Hour * 24
