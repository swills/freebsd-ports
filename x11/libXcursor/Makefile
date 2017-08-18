# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libXcursor/Makefile 448082 2017-08-17 08:26:25Z bapt $

PORTNAME=	libXcursor
PORTVERSION=	1.1.14
PORTREVISION=	4
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
