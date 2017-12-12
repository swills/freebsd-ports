# Created by: gurkan@phys.ethz.ch
# $FreeBSD: head/sysutils/timemon/Makefile 455401 2017-12-03 12:23:53Z theraven $

PORTNAME=	timemon
PORTVERSION=	4.2
PORTREVISION=	2
CATEGORIES=	sysutils gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	TimeMon-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CPU time usage monitor for GNUstep

NO_CDROM=	distribute without fee

USES=		gnustep
USE_GNUSTEP=	back build

post-patch:
	${RM} ${WRKSRC}/shared_obj/*.*

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/TimeMon.app/TimeMon

.include <bsd.port.mk>
