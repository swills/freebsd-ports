# $FreeBSD: head/x11/xcursorgen/Makefile 489739 2019-01-08 20:34:50Z zeising $

PORTNAME=	xcursorgen
PORTVERSION=	1.0.7
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Create an X cursor file from a collection of PNG images

LICENSE=	MIT

LIB_DEPENDS=	libpng.so:graphics/png

XORG_CAT=	app
USE_XORG=	x11 xcursor xorgproto
INSTALL_TARGET=	install-strip

PLIST_FILES=	bin/xcursorgen man/man1/xcursorgen.1.gz

.include <bsd.port.mk>
