# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/textproc/pure-csv/Makefile 420590 2016-08-22 09:01:16Z amdmi3 $

PORTNAME=	pure-csv
PORTVERSION=	1.6
CATEGORIES=	textproc
MASTER_SITES=	https://bitbucket.org/purelang/pure-lang/downloads/
DIST_SUBDIR=	pure

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CSV reading and writing module for the Pure language

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		pkgconfig pure

PORTDOCS=	README
PLIST_FILES=	lib/pure/csv.pure \
		lib/pure/csv.so

OPTIONS_DEFINE=	DOCS

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/pure/csv.so

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
