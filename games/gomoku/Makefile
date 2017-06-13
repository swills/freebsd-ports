# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: head/games/gomoku/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	gomoku
PORTVERSION=	1.2.9
PORTREVISION=	3
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
