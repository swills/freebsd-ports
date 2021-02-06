--- model/manifest.go.orig	2021-01-22 00:23:04 UTC
+++ model/manifest.go
@@ -118,6 +118,7 @@ type PluginSettingsSchema struct {
 //      "server": {
 //        "executables": {
 //          "linux-amd64": "server/dist/plugin-linux-amd64",
+//          "freebsd-amd64": "server/dist/plugin-freebsd-amd64",
 //          "darwin-amd64": "server/dist/plugin-darwin-amd64",
 //          "windows-amd64": "server/dist/plugin-windows-amd64.exe"
 //        }
@@ -213,6 +214,8 @@ type ManifestServer struct {
 type ManifestExecutables struct {
 	// LinuxAmd64 is the path to your executable binary for the corresponding platform
 	LinuxAmd64 string `json:"linux-amd64,omitempty" yaml:"linux-amd64,omitempty"`
+	// FreeBSDAmd64 is the path to your executable binary for the corresponding platform
+	FreeBSDAmd64 string `json:"freebsd-amd64,omitempty" yaml:"freebsd-amd64,omitempty"`
 	// DarwinAmd64 is the path to your executable binary for the corresponding platform
 	DarwinAmd64 string `json:"darwin-amd64,omitempty" yaml:"darwin-amd64,omitempty"`
 	// WindowsAmd64 is the path to your executable binary for the corresponding platform
@@ -290,6 +293,8 @@ func (m *Manifest) GetExecutableForRuntime(goOs, goArc
 	if server.Executables != nil {
 		if goOs == "linux" && goArch == "amd64" {
 			executable = server.Executables.LinuxAmd64
+		} else if goOs == "freebsd" && goArch == "amd64" {
+			executable = server.Executables.FreeBSDAmd64
 		} else if goOs == "darwin" && goArch == "amd64" {
 			executable = server.Executables.DarwinAmd64
 		} else if goOs == "windows" && goArch == "amd64" {
