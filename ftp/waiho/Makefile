# $FreeBSD: head/ftp/waiho/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	waiho
PORTVERSION=	0.2
PORTREVISION=	9
CATEGORIES=	ftp gnustep
MASTER_SITES=	http://www.roard.com/waiho/download/
DISTNAME=	Waiho-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple FTP client for GNUstep

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:tgz gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Waiho.app/Waiho

.include <bsd.port.mk>
