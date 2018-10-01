# Created by: gurkan@phys.ethz.ch
# $FreeBSD: head/sysutils/timemon/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	timemon
PORTVERSION=	4.2
PORTREVISION=	3
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
