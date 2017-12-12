# $FreeBSD: head/games/gnustep-sudoku/Makefile 455401 2017-12-03 12:23:53Z theraven $

PORTNAME=	sudoku
PORTVERSION=	0.7
PORTREVISION=	5
CATEGORIES=	games gnustep
MASTER_SITES=	SAVANNAH/gap
PKGNAMEPREFIX=	gnustep-
DISTNAME=	Sudoku-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sudoku solver and generator

LICENSE=	GPLv3+

USES=		gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Sudoku.app/Sudoku

.include <bsd.port.mk>
