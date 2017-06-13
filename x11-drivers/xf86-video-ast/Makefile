# $FreeBSD: head/x11-drivers/xf86-video-ast/Makefile 433287 2017-02-04 07:57:42Z danfe $

PORTNAME=	xf86-video-ast
PORTVERSION=	1.1.5
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org ASPEED display driver

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

XORG_CAT=	driver
USE_XORG=	xf86driproto glproto
INSTALL_TARGET=	install-strip

PLIST_FILES=	lib/xorg/modules/drivers/ast_drv.so

.include <bsd.port.mk>
