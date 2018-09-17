# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/games/xorgramana/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	xorgramana
PORTVERSION=	0.0.8
PORTREVISION=	10
CATEGORIES=	games
MASTER_SITES=	http://www.jwm-art.net/XorGramana/ \
		http://mirror.amdmi3.ru/distfiles/
DISTNAME=	XorGramana-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Logic word puzzle game set inside a series of mazes

USES=		tar:bzip2 gmake
USE_SDL=	sdl image
USE_GL=		glu

ALL_TARGET=	${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	*
PORTDATA=	*

DESKTOP_ENTRIES="XorGramana" \
		"Logic word puzzle game set inside a series of mazes" \
		"${DATADIR}/GFX/x.png" \
		"xorgramana" \
		"Game;LogicGame;" \
		false

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|GFX/|${DATADIR}/&|' ${WRKSRC}/icons.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} "data GFX" ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
