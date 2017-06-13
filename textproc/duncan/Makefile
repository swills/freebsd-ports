# Created by: gurkan@phys.ethz.ch
# $FreeBSD: head/textproc/duncan/Makefile 430082 2016-12-31 02:00:32Z vanilla $

PORTNAME=	duncan
PORTVERSION=	0.2
CATEGORIES=	textproc gnustep
MASTER_SITES=	http://www.eskimo.com/~pburns/Dictionaries/files/
DISTNAME=	Duncan-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	English to Thai dictionary for GNUstep

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gnustep
USE_GNUSTEP=	back build

WRKSRC=		${WRKDIR}/Duncan

post-patch:
	${REINPLACE_CMD} -e 's|^GNUSTEP_INSTALLATION_DIR|#GNUSTEP_INSTALLATION_DIR|' \
		${WRKSRC}/GNUmakefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Duncan.app/Duncan

.include <bsd.port.mk>
