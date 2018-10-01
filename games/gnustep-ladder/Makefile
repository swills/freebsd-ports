# Created by: gurkan@phys.ethz.ch
# $FreeBSD: head/games/gnustep-ladder/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	ladder
PORTVERSION=	1.0
PORTREVISION=	8
CATEGORIES=	games gnustep
MASTER_SITES=	SAVANNAH/gap
PKGNAMEPREFIX=	gnustep-
DISTNAME=	Ladder-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNU Go frontend for GNUstep

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING.GPL

RUN_DEPENDS=	gnugo:games/gnugo

USES=		gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Ladder.app/Ladder

.include <bsd.port.mk>
