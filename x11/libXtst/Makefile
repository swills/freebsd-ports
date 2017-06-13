# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libXtst/Makefile 423473 2016-10-07 18:01:45Z kwm $

PORTNAME=	libXtst
PORTVERSION=	1.2.3
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Test extension

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	x11 xext recordproto:both xextproto inputproto:both \
		xi
USES+=	cpe
CPE_PRODUCT=	libxtst
CPE_VENDOR=	x

CONFIGURE_ARGS+=--disable-specs --without-xmlto

post-patch:
	@${REINPLACE_CMD} '/^SUBDIRS/,/^$$/ \
		s/specs//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
