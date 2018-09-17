# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/libXt/Makefile 479538 2018-09-11 18:34:27Z zeising $

PORTNAME=	libXt
PORTVERSION=	1.1.5
PORTREVISION=	2
PORTEPOCH=	1
CATEGORIES=	x11-toolkits

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Toolkit library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

XORG_CAT=	lib
USE_XORG=	x11 sm ice xorgproto
CONFIGURE_ARGS=	--disable-specs
USES=		cpe
CPE_PRODUCT=	libxt
CPE_VENDOR=	x

post-patch:
	@${REINPLACE_CMD} 's/test.*-traditional.*;/true;/' \
		${WRKSRC}/configure

.include <bsd.port.mk>
