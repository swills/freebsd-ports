# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD$

PORTNAME=	clutter
PORTVERSION=	1.26.4
CATEGORIES=	graphics
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	OpenGL based interactive canvas library

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libjson-glib-1.0.so:devel/json-glib \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libcogl.so:graphics/cogl \
		libinput.so:x11/libinput \
		libudev.so:devel/libudev-devd \
		libwayland-client.so:graphics/wayland \
		libxkbcommon.so:x11/libxkbcommon

PORTSCOUT=	limit:1,even

USES=		gettext gl gnome meson localbase pkgconfig \
		python:3.6+,build tar:xz xorg
USE_GNOME=	atk cairo gdkpixbuf2 gtk30 pango introspection:build
USE_GL=		egl
USE_XORG=	x11 xcomposite xdamage xext xi
USE_LDCONFIG=	yes
MESON_ARGS=	-Dbuild_examples=false \
		-Dbackends=x11,gdk,wayland,eglnative \
		-Ddocumentation=false

.include <bsd.port.mk>
