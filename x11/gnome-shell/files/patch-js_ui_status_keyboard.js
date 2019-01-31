--- js/ui/status/keyboard.js.orig	2018-07-18 21:01:36 UTC
+++ js/ui/status/keyboard.js
@@ -334,9 +334,6 @@ var InputSourceManager = new Lang.Class({
                                   Meta.KeyBindingFlags.IS_REVERSED,
                                   Shell.ActionMode.ALL,
                                   this._switchInputSource.bind(this));
-        if (Main.sessionMode.isGreeter)
-            this._settings = new InputSourceSystemSettings();
-        else
             this._settings = new InputSourceSessionSettings();
         this._settings.connect('input-sources-changed', this._inputSourcesChanged.bind(this));
         this._settings.connect('keyboard-options-changed', this._keyboardOptionsChanged.bind(this));
