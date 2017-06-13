# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: head/databases/gqlplus/Makefile 430404 2017-01-02 20:04:36Z rene $

PORTNAME=	gqlplus
PORTVERSION=	1.16
CATEGORIES=	databases
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SQL*PLUS with commandline editing, history, and name completion

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

GNU_CONFIGURE=	yes
USES=		autoreconf gmake readline

PORTDOCS=	README ChangeLog
PLIST_FILES=	bin/gqlplus

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
