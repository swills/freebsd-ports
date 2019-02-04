# $FreeBSD: head/games/jigsaw/Makefile 492056 2019-02-03 15:37:58Z theraven $

PORTNAME=	jigsaw
PORTVERSION=	0.8
PORTREVISION=	7
CATEGORIES=	games gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	Jigsaw-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simulates a jigsaw puzzle and illustrates the use of clipping paths

LICENSE=	GPLv2+

USES=		gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Jigsaw.app/Jigsaw

.include <bsd.port.mk>
