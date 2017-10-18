# Created by: janos.mohacsi@bsd.hu
# $FreeBSD: head/hungarian/hunspell/Makefile 450508 2017-09-24 18:49:16Z sunpoet $

PORTNAME=	hunspell
PORTVERSION=	1.6.1
CATEGORIES=	hungarian textproc
MASTER_SITES=	SF/magyarispell/Magyar%20Ispell/${PORTVERSION}
DISTNAME=	hu_HU-${PORTVERSION}

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Hunspell Hungarian dictionary

LICENSE=	GPLv2 LGPL21 MPL11
LICENSE_COMB=	dual

NO_ARCH=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/hu_HU-${PORTVERSION}

PLIST_FILES=	%%DATADIR%%/hu_HU.aff \
		%%DATADIR%%/hu_HU.dic

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/hu_HU.aff ${WRKSRC}/hu_HU.dic ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
