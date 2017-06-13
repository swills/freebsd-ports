# Created by: jedgar@fxp.org
# $FreeBSD: head/databases/dbf2mysql/Makefile 434335 2017-02-18 09:01:37Z amdmi3 $

PORTNAME=	dbf2mysql
PORTVERSION=	1.14
PORTREVISION=	5
CATEGORIES=	databases
MASTER_SITES=	MYSQL/Contrib/Old-Versions

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Programs to convert .dbf files to MySQL tables and vice versa

LICENSE=	NONE

USES=		mysql

PORTDOCS=	README
PLIST_FILES=	bin/dbf2mysql bin/mysql2dbf

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dbf2mysql ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/mysql2dbf ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
