# $FreeBSD: head/deskutils/affiche/Makefile 492056 2019-02-03 15:37:58Z theraven $

PORTNAME=	affiche
PORTVERSION=	0.6.0
PORTREVISION=	10
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
