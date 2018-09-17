# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libXext/Makefile 479538 2018-09-11 18:34:27Z zeising $

PORTNAME=	libXext
PORTVERSION=	1.3.3
PORTREVISION=	3
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X11 Extension library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	x11 xau xorgproto
CONFIGURE_ARGS+=--disable-specs --without-xmlto
INSTALL_TARGET=	install-strip
USES+=	cpe
CPE_PRODUCT=	libxext
CPE_VENDOR=	x

.include <bsd.port.mk>
