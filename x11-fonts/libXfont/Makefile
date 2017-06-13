# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11-fonts/libXfont/Makefile 425432 2016-11-05 19:08:34Z bapt $

PORTNAME=	libXfont
PORTVERSION=	1.5.2
PORTEPOCH=	2
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X font library

LIB_DEPENDS=	libfreetype.so:print/freetype2

XORG_CAT=	lib
USE_XORG=	xproto:both xtrans fontsproto:both fontenc
INSTALL_TARGET=	install-strip
USES+=	cpe
CPE_PRODUCT=	libxfont
CPE_VENDOR=	x

CONFIGURE_ARGS=--without-xmlto --disable-devel-docs

.include <bsd.port.mk>
