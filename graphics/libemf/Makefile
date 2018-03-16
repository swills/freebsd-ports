# Created by: NAKATA Maho <maho@FreeBSD.org>
# $FreeBSD: head/graphics/libemf/Makefile 464164 2018-03-11 11:20:43Z rene $

PORTNAME=	libEMF
PORTVERSION=	1.0.7
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	office@FreeBSD.org
COMMENT=	Enhanced Metafile Library

LICENSE=	LGPL21

OPTIONS_DEFINE=	DOCS

USES=		libtool
GNU_CONFIGURE=	yes

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/html/* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
