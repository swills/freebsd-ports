# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: head/games/gshisen/Makefile 448472 2017-08-21 13:26:28Z theraven $

PORTNAME=	gshisen
PORTVERSION=	1.3.0
PORTREVISION=	4
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
