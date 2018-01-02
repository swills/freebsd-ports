# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libXcursor/Makefile 456538 2017-12-17 15:26:02Z zeising $

PORTNAME=	libXcursor
PORTVERSION=	1.1.15
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X client-side cursor loading library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	xrender x11 xfixes fixesproto xproto:both \
		xextproto

USES+=	cpe
CPE_PRODUCT=	libxcursor
CPE_VENDOR=	x

CONFIGURE_ARGS=	--with-icondir=${PREFIX}/share/icons
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
