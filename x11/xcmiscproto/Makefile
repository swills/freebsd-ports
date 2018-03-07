# Created by: Dejan Lesjak <lesi@FreeBSD.org>
# $FreeBSD: head/x11/xcmiscproto/Makefile 463286 2018-03-01 08:33:02Z amdmi3 $

PORTNAME=	xcmiscproto
PORTVERSION=	1.2.2
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	XCMisc extension headers

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

XORG_CAT=	proto

CONFIGURE_ARGS+=--disable-specs --without-xmlto

post-patch:
	@${REINPLACE_CMD} '/^SUBDIRS =/,/^$$/ s/specs//' \
		${WRKSRC}/Makefile.in

#SUBDIRS= specs

.include <bsd.port.mk>
