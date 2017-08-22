# $FreeBSD: head/deskutils/affiche/Makefile 448472 2017-08-21 13:26:28Z theraven $

PORTNAME=	affiche
PORTVERSION=	0.6.0
PORTREVISION=	7
CATEGORIES=	deskutils gnustep
MASTER_SITES=	http://www.collaboration-world.com/affiche.data/releases/Stable/
DISTNAME=	Affiche-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Affiche allows people to stick notes

LICENSE=	GPLv2

USES=		gnustep
USE_GNUSTEP=	back build

WRKSRC=		${WRKDIR}/Affiche

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Affiche.app/Affiche

.include <bsd.port.mk>
