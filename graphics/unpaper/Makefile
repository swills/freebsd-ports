# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/graphics/unpaper/Makefile 408327 2016-02-06 23:20:05Z amdmi3 $

PORTNAME=	unpaper
PORTVERSION=	0.3
CATEGORIES=	graphics
MASTER_SITES=	https://www.flameeyes.eu/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Post-processing tool for scanned sheets of paper

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

PORTDOCS=	*
PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=	DOCS

do-build:
	@${CC} ${CFLAGS} -o ${WRKSRC}/${PORTNAME} \
		${WRKSRC}/src/${PORTNAME}.c -lm

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@cd ${WRKSRC}/ && ${INSTALL_DATA} CHANGELOG README ${STAGEDIR}${DOCSDIR}
	@cd ${WRKSRC}/doc/ && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
