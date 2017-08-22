# Created by: gurkan@phys.ethz.ch
# $FreeBSD: head/x11-clocks/aclock/Makefile 448472 2017-08-21 13:26:28Z theraven $

PORTNAME=	aclock
PORTVERSION=	0.4.0
PORTREVISION=	5
CATEGORIES=	x11-clocks gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	AClock-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Analog Clock for GNUstep

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gnustep
USE_GNUSTEP=	back build

WRKSRC=		${WRKDIR}/${DISTNAME}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/AClock.app/AClock

.include <bsd.port.mk>
