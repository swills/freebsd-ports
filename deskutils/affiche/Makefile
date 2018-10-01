# $FreeBSD: head/deskutils/affiche/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	affiche
PORTVERSION=	0.6.0
PORTREVISION=	9
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
