--- src/bbcp_ZCX.C.orig	2018-06-18 04:51:49 UTC
+++ src/bbcp_ZCX.C
@@ -144,7 +144,7 @@ int bbcp_ZCX::Process()
 
 // If we have gotten here then all went well so far flush output
 //
-   if (obp->blen = outsz - ZStream.avail_out)
+   if ((obp->blen = outsz - ZStream.avail_out))
       {obp->boff = outbytes; outbytes += obp->blen;
        Obuff->putFullBuff(obp);
        if (!(obp = Obuff->getEmptyBuff())) return ENOBUFS;
