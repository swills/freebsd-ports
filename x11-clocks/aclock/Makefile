# Created by: gurkan@phys.ethz.ch
# $FreeBSD: head/x11-clocks/aclock/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	aclock
PORTVERSION=	0.4.0
PORTREVISION=	7
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
