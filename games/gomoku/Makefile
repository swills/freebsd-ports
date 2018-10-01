# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: head/games/gomoku/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	gomoku
PORTVERSION=	1.2.9
PORTREVISION=	6
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
