# $FreeBSD: head/games/gmines/Makefile 448472 2017-08-21 13:26:28Z theraven $

PORTNAME=	gmines
PORTVERSION=	0.2
PORTREVISION=	4
CATEGORIES=	games gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	GMines-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Well-known minesweeper game for GNUstep

LICENSE=	GPLv2+

USES=		gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/GMines.app/GMines

.include <bsd.port.mk>
