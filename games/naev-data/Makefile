# Created by: Jose Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/games/naev-data/Makefile 447302 2017-08-03 23:21:18Z acm $

PORTNAME=	naev
PORTVERSION=	0.7.0
DISTVERSIONSUFFIX=	-ndata
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-${PORTVERSION}/
PKGNAMESUFFIX=	-data
EXTRACT_ONLY=	# empty

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Naev game data file

LICENSE=	GPLv2 GPLv3 CC-BY-3.0 CC-BY-SA-3.0 PD
LICENSE_COMB=	multi

USES=		zip
NO_ARCH=	yes
NO_BUILD=	yes

PORTDATA=	*

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${DISTDIR}/${DISTFILES} ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
