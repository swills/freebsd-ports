# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libXdmcp/Makefile 496408 2019-03-21 02:12:37Z zeising $

PORTNAME=	libXdmcp
PORTVERSION=	1.1.3
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Display Manager Control Protocol library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	xorgproto:both

CONFIGURE_ARGS+=--disable-docs --without-xmlto

post-patch:
	@${REINPLACE_CMD} '/^SUBDIRS/,/^$$/ \
		s/doc//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
