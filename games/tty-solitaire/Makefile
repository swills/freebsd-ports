# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/games/tty-solitaire/Makefile 477065 2018-08-13 13:12:46Z amdmi3 $

PORTNAME=	tty-solitaire
PORTVERSION=	1.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	games

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Play solitaire in your terminal

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	mpereira

USES=		gmake ncurses

PORTDOCS=	*
PLIST_FILES=	bin/ttysolitaire

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ttysolitaire ${STAGEDIR}${PREFIX}/bin/

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
