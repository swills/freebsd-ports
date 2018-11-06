--- kitty/config_data.py.orig 2018-11-06 01:20:16 UTC
+++ kitty/config_data.py
@@ -426,7 +426,7 @@ If so, set this to no.'''))
 
 g('bell')  # {{{
 
-o('enable_audio_bell', True, long_text=_('''
+o('enable_audio_bell', False, long_text=_('''
 Enable/disable the audio bell. Useful in environments that require silence.'''))
 
 o('visual_bell_duration', 0.0, option_type=positive_float, long_text=_('''
