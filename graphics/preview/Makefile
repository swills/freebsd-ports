# $FreeBSD: head/graphics/preview/Makefile 455401 2017-12-03 12:23:53Z theraven $

PORTNAME=	preview
PORTVERSION=	0.8.5
PORTREVISION=	8
CATEGORIES=	graphics gnustep
MASTER_SITES=	http://download.gna.org/gsimageapps/
PKGNAMEPREFIX=	gnustep-
DISTNAME=	Preview-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple image viewer

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gnustep
USE_GNUSTEP=	back build

WRKSRC=		${WRKDIR}/Preview

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Preview.app/Preview

.include <bsd.port.mk>
