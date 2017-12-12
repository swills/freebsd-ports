# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: head/games/gomoku/Makefile 455401 2017-12-03 12:23:53Z theraven $

PORTNAME=	gomoku
PORTVERSION=	1.2.9
PORTREVISION=	5
CATEGORIES=	games gnustep
MASTER_SITES=	http://www.gnustep.it/nicola/Applications/Gomoku/
DISTNAME=	Gomoku-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNUstep Gomoku game

LICENSE=	GPLv2+

USES=		gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Gomoku.app/Gomoku

.include <bsd.port.mk>
