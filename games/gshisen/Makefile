# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: head/games/gshisen/Makefile 492056 2019-02-03 15:37:58Z theraven $

PORTNAME=	gshisen
PORTVERSION=	1.3.0
PORTREVISION=	7
CATEGORIES=	games gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	GShisen-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Shisen-sho puzzle game for GNUstep

LICENSE=	GPLv2+

USES=		gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/GShisen.app/GShisen

.include <bsd.port.mk>
