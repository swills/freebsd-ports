# Created by: Dejan Lesjak <lesi@FreeBSD.org>
# $FreeBSD: head/x11/xextproto/Makefile 465158 2018-03-21 08:33:23Z amdmi3 $

PORTNAME=	xextproto
PORTVERSION=	7.3.0
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	XExt extension headers

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

XORG_CAT=	proto

CONFIGURE_ARGS+=--disable-specs

post-patch:
	@${REINPLACE_CMD} '/^SUBDIR/s/specs//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
