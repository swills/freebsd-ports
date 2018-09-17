# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libXtst/Makefile 479538 2018-09-11 18:34:27Z zeising $

PORTNAME=	libXtst
PORTVERSION=	1.2.3
PORTREVISION=	2
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Test extension

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	x11 xext xi xorgproto
USES+=	cpe
CPE_PRODUCT=	libxtst
CPE_VENDOR=	x

CONFIGURE_ARGS+=--disable-specs --without-xmlto

post-patch:
	@${REINPLACE_CMD} '/^SUBDIRS/,/^$$/ \
		s/specs//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
