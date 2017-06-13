# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/games/xorgramana/Makefile 441503 2017-05-23 05:03:14Z rezny $

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

post-patch:
	@${REINPLACE_CMD} -e 's|GFX/|${DATADIR}/&|' ${WRKSRC}/icons.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} "data GFX" ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
