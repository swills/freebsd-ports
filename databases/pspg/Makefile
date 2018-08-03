# $FreeBSD: head/databases/pspg/Makefile 475605 2018-07-28 19:31:03Z joneum $

PORTNAME=	pspg
DISTVERSION=	1.2.2
CATEGORIES=	databases

MAINTAINER=	dg@syrec.org
COMMENT=	Tabular data pager designed to be used with psql

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		autoreconf gmake localbase ncurses pkgconfig readline
USE_GITHUB=	yes
GH_ACCOUNT=	okbob
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/pspg
PORTDOCS=	README.md

SUB_FILES=	pkg-message

OPTIONS_DEFINE=	DOCS

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/pspg

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
