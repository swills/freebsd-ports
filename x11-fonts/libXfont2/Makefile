# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11-fonts/libXfont2/Makefile 456561 2017-12-17 19:01:19Z zeising $

PORTNAME=	libXfont2
PORTVERSION=	2.0.3
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X font library

LIB_DEPENDS=	libfreetype.so:print/freetype2

XORG_CAT=	lib
USE_XORG=	xproto:both xtrans fontsproto:both fontenc
INSTALL_TARGET=	install-strip
#USES+=	cpe
#CPE_PRODUCT=	libxfont
#CPE_VENDOR=	x

CONFIGURE_ARGS=--without-xmlto --disable-devel-docs --without-fop

.include <bsd.port.mk>
