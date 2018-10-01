# $FreeBSD: head/ftp/gnustep-ftp/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	ftp
PORTVERSION=	0.5
PORTREVISION=	5
CATEGORIES=	ftp gnustep
MASTER_SITES=	SAVANNAH/gap
PKGNAMEPREFIX=	gnustep-
DISTNAME=	FTP-${PORTVERSION}

MAINTAINER=	theraven@FreeBSD.org
COMMENT=	Compact and handy FTP client for GNUstep

LICENSE=	GPLv2

USES=		gnustep
USE_GNUSTEP=	back build

post-patch:
	${REINPLACE_CMD} -e 's|^GNUSTEP_INSTALLATION_DIR|#GNUSTEP_INSTALLATION_DIR|' \
		${WRKSRC}/GNUmakefile

.include <bsd.port.mk>
