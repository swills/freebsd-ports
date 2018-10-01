# $FreeBSD: head/audio/mpdcon/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	mpdcon
PORTVERSION=	1.5.1
PORTREVISION=	6
CATEGORIES=	audio gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	MPDCon-${PORTVERSION}

MAINTAINER=	theraven@FreeBSD.org
COMMENT=	MPD client for GNUstep

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/Documentation/COPYING

LIB_DEPENDS=	libmpdclient.so.2:audio/libmpdclient \
		libSQLClient.so:databases/sqlclient

USES=		gnustep
USE_GNUSTEP=	base gui back build

post-patch:
	${REINPLACE_CMD} -e \
		's|^GNUSTEP_INSTALLATION_DIR|#GNUSTEP_INSTALLATION_DIR|' \
			${WRKSRC}/GNUmakefile

.include <bsd.port.mk>
