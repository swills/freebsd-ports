# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libXcursor/Makefile 479538 2018-09-11 18:34:27Z zeising $

PORTNAME=	libXcursor
PORTVERSION=	1.1.15
PORTREVISION=	2
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X client-side cursor loading library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	xrender x11 xfixes xorgproto

USES+=	cpe
CPE_PRODUCT=	libxcursor
CPE_VENDOR=	x

CONFIGURE_ARGS=	--with-icondir=${PREFIX}/share/icons
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
