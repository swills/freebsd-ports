# Created by: Dejan Lesjak <lesi@FreeBSD.org>
# $FreeBSD: head/x11/videoproto/Makefile 425434 2016-11-05 19:12:18Z bapt $

PORTNAME=	videoproto
PORTVERSION=	2.3.3
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Video extension headers

LICENSE=	MIT

XORG_CAT=	proto

post-patch:
	@${REINPLACE_CMD} '/^install-data-am:/,/^$$/ \
		s/install-dist_docDATA//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
