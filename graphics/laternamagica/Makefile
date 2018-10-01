# $FreeBSD: head/graphics/laternamagica/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	laternamagica
PORTVERSION=	0.5
PORTREVISION=	2
CATEGORIES=	graphics gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	LaternaMagica-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Image viewer and slideshow application

LICENSE=	GPLv2+

USES=		gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/LaternaMagica.app/LaternaMagica

.include <bsd.port.mk>
