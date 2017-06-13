# $FreeBSD: head/audio/mpdcon/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	mpdcon
PORTVERSION=	1.5.1
PORTREVISION=	3
CATEGORIES=	audio gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	MPDCon-${PORTVERSION}

MAINTAINER=	theraven@FreeBSD.org
COMMENT=	MPD client for GNUstep

LICENSE=	GPLv2

USES=		gnustep
USE_GNUSTEP=	base gui back build

LIB_DEPENDS=	libmpdclient.so.2:audio/libmpdclient \
		libSQLClient.so:databases/sqlclient

post-patch:
	${REINPLACE_CMD} -e \
		's|^GNUSTEP_INSTALLATION_DIR|#GNUSTEP_INSTALLATION_DIR|' \
			${WRKSRC}/GNUmakefile

.include <bsd.port.mk>
