# $FreeBSD: head/sysutils/batmon/Makefile 448472 2017-08-21 13:26:28Z theraven $

PORTNAME=	batmon
PORTVERSION=	0.8
PORTREVISION=	1
CATEGORIES=	sysutils gnustep
MASTER_SITES=	SAVANNAH/gap

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNUstep battery monitor for laptops

LICENSE=	GPLv2+

USES=		gnustep
USE_GNUSTEP=	back build

post-patch:
	${REINPLACE_CMD} -e 's|^GNUSTEP_INSTALLATION_DIR|#GNUSTEP_INSTALLATION_DIR|' \
		${WRKSRC}/GNUmakefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/batmon.app/batmon

.include <bsd.port.mk>
