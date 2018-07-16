Part of Debian's patch at:
	http://patch-tracker.debian.org/patch/series/view/festival/1:2.1~release-5.1/src_modules_MultiSyn_path_fixes.diff

--- festival/src/modules/MultiSyn/TargetCostRescoring.cc.orig	2017-09-04 15:54:08 UTC
+++ festival/src/modules/MultiSyn/TargetCostRescoring.cc
@@ -82,7 +82,7 @@ void rescoreCandidates( EST_VTCandidate 
     //cerr << scores << endl;
   
     // calculate simple mean duration of some or all of candidates
-    float meandur = 0.0;
+    long meandur = 0.0;
     int n = 0;
 
     if( beam_width < 0 ){ // just average all of them
@@ -107,7 +107,7 @@ void rescoreCandidates( EST_VTCandidate 
 
     // then tweak the scores based on that
     for( EST_Litem *li = scores.head(); li != 0; li = li->next() ){
-        float cand_dur = scores(li)._dur; 
+        long cand_dur = scores(li)._dur; 
         //    cerr << scores(li)._cand->score << " ";
         scores(li)._cand->score += (mult * abs( cand_dur - meandur ) );
         //    cerr << scores(li)._cand->score << endl;
