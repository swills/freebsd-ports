# $FreeBSD: head/games/gnustep-sudoku/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	sudoku
PORTVERSION=	0.7
PORTREVISION=	3
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
