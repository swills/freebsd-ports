# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/archivers/ppmd/Makefile 466555 2018-04-05 12:39:29Z ehaupt $

PORTNAME=	ppmd
PORTVERSION=	20050811
CATEGORIES=	archivers
MASTER_SITES=	LOCAL/ehaupt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Fast archiver with good compression ratio

PORTDOCS=	read_me.txt
PLIST_FILES=	bin/ppmd man/man1/ppmd.1.gz

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${MANPREFIX}/man/man1
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
