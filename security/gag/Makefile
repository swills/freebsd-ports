# Created by: David O'Brien (obrien@NUXI.com)
# $FreeBSD: head/security/gag/Makefile 419676 2016-08-05 09:01:01Z amdmi3 $

PORTNAME=	gag
PORTVERSION=	2.9
CATEGORIES=	security
MASTER_SITES=	http://staff.washington.edu/dittrich/misc/
DISTNAME=	sickenscan
EXTRACT_SUFX=	.tar

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Stacheldraht (DOS attack) agent detector

ALL_TARGET=	gag

PORTDOCS=	README
PLIST_FILES=	sbin/gag

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gag ${STAGEDIR}${PREFIX}/sbin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
