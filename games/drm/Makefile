# Created by: Andrey Zakhvatov
# $FreeBSD: head/games/drm/Makefile 407601 2016-01-31 09:48:53Z marino $

PORTNAME=	drm
PORTVERSION=	1.0
CATEGORIES=	games
MASTER_SITES=	SUNSITE/games/arcade
DISTNAME=	dr_mario

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Very simple Tetris-style game

ALL_TARGET=	bugs
USES=		ncurses tar:Z

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bugs ${STAGEDIR}${PREFIX}/bin/drm
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
