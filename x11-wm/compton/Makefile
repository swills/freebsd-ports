# $FreeBSD$

PORTNAME=	compton
DISTVERSIONPREFIX=	v
DISTVERSION=	7.4
PORTEPOCH=	1
CATEGORIES=	x11-wm

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Feature-rich compositing window manager for X11

LICENSE=	MIT MPL20
LICENSE_COMB=	multi
LICENSE_FILE_MIT=	${WRKSRC}/LICENSES/MIT

BUILD_DEPENDS=	${LOCALBASE}/include/uthash.h:devel/uthash
LIB_DEPENDS=	libev.so:devel/libev \
		libxcb-image.so:x11/xcb-util-image \
		libxcb-render-util.so:x11/xcb-util-renderutil
RUN_DEPENDS=	xprop:x11/xprop \
		xwininfo:x11/xwininfo

USES=		compiler:c11 meson localbase pkgconfig python:3.4+,run shebangfix
USE_GITHUB=	yes
USE_XORG=	x11 xcb xext pixman
GH_ACCOUNT=	yshui
SHEBANG_FILES=	bin/compton-convgen.py

OPTIONS_DEFINE=	CONFIG DBUS DOCS DRM OPENGL PCRE TEST
OPTIONS_DEFAULT=CONFIG DBUS DRM OPENGL PCRE

CONFIG_DESC=		Configuration file parsing support
CONFIG_LIB_DEPENDS=	libconfig.so:devel/libconfig \
			libxdg-basedir.so:x11/libxdg-basedir
CONFIG_MESON_TRUE=	config_file

PCRE_LIB_DEPENDS=	libpcre.so:devel/pcre
PCRE_MESON_TRUE=	regex

DRM_DESC=		DRM VSync method support
DRM_LIB_DEPENDS=	libdrm.so:graphics/libdrm
DRM_MESON_TRUE=		vsync_drm

OPENGL_USE=		GL=gl
OPENGL_MESON_TRUE=	opengl

DBUS_LIB_DEPENDS=	libdbus-1.so:devel/dbus
DBUS_MESON_TRUE=	dbus

DOCS_BUILD_DEPENDS=	a2x:textproc/asciidoc
DOCS_MESON_TRUE=	build_docs
DOCS_PLIST_FILES=	man/man1/${PORTNAME}.1.gz \
			man/man1/${PORTNAME}-trans.1.gz

TEST_MESON_TRUE=	unittest
TEST_TEST_TARGET=	test

post-patch:
	@${REINPLACE_CMD} -e '/install_dir/s,share/man,man,' \
		${WRKSRC}/man/meson.build
	@${REINPLACE_CMD} -e '/config_system_dir/s,/etc,${PREFIX}&,' \
		${WRKSRC}/src/config_libconfig.c
# Extract (snapshot) version from the port instead of meson.build
	@${REINPLACE_CMD} -i .nogit -e 's/git.found()/false/' \
		-e "/project_version/s/=.*/= '${DISTVERSIONFULL}'/" \
		${WRKSRC}/meson.build

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/xdg
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.sample.conf \
		${STAGEDIR}${PREFIX}/etc/xdg/${PORTNAME}.conf.sample

pre-install-TEST-on:	do-test

.include <bsd.port.mk>
