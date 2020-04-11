--- src/wmMoonClock.c.orig	2017-08-15 00:31:05.000000000 +0200
+++ src/wmMoonClock.c	2020-04-11 17:15:45.372609000 +0200
@@ -157,7 +157,8 @@
     struct tm		*GMTTime, *LocalTime;
     XEvent		event;
     int			i, n, j, ImageNumber, Year, Month, DayOfMonth, digit;
-    long		CurrentLocalTime, CurrentGMTTime, date;
+    time_t		CurrentLocalTime, CurrentGMTTime;
+    long		date;
     double		UT, val, RA, DEC, UTRise, UTSet, LocalHour, hour24();
     int			D, H, M, S, sgn, A, B, q;
     CTrans           	c;
