# Created by: Ben Widawsky <bwidawsk@FreeBSD.org>
# $FreeBSD$

PORTNAME= kitty
PORTVERSION= 0.13.3
DISTVERSIONPREFIX= v
CATEGORIES= x11

MAINTAINER= bwidawsk@FreeBSD.org
COMMENT= Cross-platform, fast, feature full, GPU based terminal emulator

LICENSE= GPLv3
LICENSE_FILE= ${WRKSRC}/LICENSE

LIB_DEPENDS= libdbus-1.so:devel/dbus \
	libfontconfig.so:x11-fonts/fontconfig \
	libfreetype.so:print/freetype2 \
	libglfw.so:graphics/glfw \
	libharfbuzz.so:print/harfbuzz \
	libpng.so:graphics/png \
	libxkbcommon.so:x11/libxkbcommon \
	libncursesw.so:devel/ncurses \
	libdbus-1.so:devel/dbus \
	libwayland-egl.so:graphics/wayland \
	libepoll-shim.so:devel/libepoll-shim \
	libpng.so:graphics/png

USES=  gl gmake pkgconfig:build python:3.5+ shebangfix terminfo
USE_GL=  gl
USE_XORG= x11 xft xrandr xinerama xcb xcursor xi
USE_GITHUB= yes
GH_ACCOUNT= kovidgoyal

SHEBANG_FILES= kitty/launcher/kitty
BINARY_ALIAS= python3=${PYTHON_CMD}

OPTIONS_DEFINE= ICAT DOCS BELL NLS
OPTIONS_DEFAULT= NLS

ICAT_DESC= tool to display images in the terminal
ICAT_LIB_DEPENDS= libMagickCore-6.so:graphics/ImageMagick

DOCS_BUILD_DEPENDS= ${PYTHON_PKGNAMEPREFIX}sphinx>=1.7:textproc/py-sphinx@${PY_FLAVOR}
DOCS_EXTRA_PATCHES= ${PATCHDIR}/docs-on-patch-setup.py
DOCS_EXTRA_PATCHES_OFF= ${PATCHDIR}/docs-off-patch-setup.py

BELL_DESC= disable audio bell by default (can be changed in kitty.conf)
BELL_EXTRA_PATCHES_OFF= ${PATCHDIR}/bell-off-patch-kitty_config__data.py

NLS_USES= gettext

post-patch-DOCS-on:
	${REINPLACE_CMD} -e 's|python3|${PYTHON_CMD}|g' ${WRKSRC}/docs/Makefile
	${REINPLACE_CMD} -e 's|sphinx-build|&-${PYTHON_VER}|' ${WRKSRC}/docs/Makefile

do-build:
	cd ${WRKSRC} && CC=clang ${PYTHON_CMD} setup.py --prefix ${STAGEDIR}${PREFIX} linux-package

do-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/kitty/kitty/fast_data_types.so \
		${STAGEDIR}${PREFIX}/lib/kitty/kitty/glfw-x11.so \
		${STAGEDIR}${PREFIX}/lib/kitty/kittens/diff/diff_speedup.so \
		${STAGEDIR}${PREFIX}/lib/kitty/kittens/unicode_input/unicode_names.so \
		${STAGEDIR}${PREFIX}/lib/kitty/kitty/glfw-wayland.so \
		${STAGEDIR}${PREFIX}/bin/kitty
	${INSTALL_DATA} ${WRKSRC}/terminfo/kitty.terminfo \
		${STAGEDIR}${PREFIX}/share/misc/

.include <bsd.port.mk>
