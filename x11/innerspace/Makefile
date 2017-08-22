# $FreeBSD: head/x11/innerspace/Makefile 448472 2017-08-21 13:26:28Z theraven $

PORTNAME=	innerspace
PORTVERSION=	0.2.0
PORTREVISION=	6
CATEGORIES=	x11 gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	InnerSpace-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNUstep screensaver

LICENSE=	GPLv2

USES=		gnustep
USE_GNUSTEP=	back build

post-patch:
	${REINPLACE_CMD} -e 's|^GNUSTEP_INSTALLATION_DIR|#GNUSTEP_INSTALLATION_DIR|' \
		${WRKSRC}/GNUmakefile

post-install:
	${STRIP_CMD} \
		${STAGEDIR}${PREFIX}/GNUstep/System/Applications/InnerSpace.app/Resources/NickSpace.InnerSpace/NickSpace \
		${STAGEDIR}${PREFIX}/GNUstep/System/Applications/InnerSpace.app/Resources/Black.InnerSpace/Black \
		${STAGEDIR}${PREFIX}/GNUstep/System/Applications/InnerSpace.app/Resources/Boxes.InnerSpace/Boxes \
		${STAGEDIR}${PREFIX}/GNUstep/System/Applications/InnerSpace.app/InnerSpace

.include <bsd.port.mk>
