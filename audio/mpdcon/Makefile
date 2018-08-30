# $FreeBSD: head/audio/mpdcon/Makefile 477713 2018-08-21 09:38:07Z amdmi3 $

PORTNAME=	mpdcon
PORTVERSION=	1.5.1
PORTREVISION=	5
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
