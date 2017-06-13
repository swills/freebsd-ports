# Created by: Nicola Vitale <nivit@email.it>
# $FreeBSD: head/math/chryzodus/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	chryzodus
PORTVERSION=	0.32
DISTVERSIONSUFFIX=	-src
PORTREVISION=	3
CATEGORIES=	math
MASTER_SITES=	SF

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Chryzode (http//www.chryzode.org) explorer

LICENSE=	GPLv2

LIB_DEPENDS=	liballeg.so:devel/allegro

WRKSRC=		${WRKDIR}/${PORTNAME}
MAKEFILE=	makefile.unx

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/doc && \
	${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
