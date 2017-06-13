# Created by: mich@freebsdcluster.org
# $FreeBSD: head/sysutils/wtail/Makefile 408061 2016-02-04 17:26:06Z marino $

PORTNAME=	wtail
PORTVERSION=	0.2.2
CATEGORIES=	sysutils
MASTER_SITES=	http://www.teaser.fr/~amajorel/wtail/

MAINTAINER=	mich@FreeBSD.org
COMMENT=	Wtail does the equivalent of tail -f on several files at once

USES=		ncurses
OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wtail ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}/README

.include <bsd.port.mk>
