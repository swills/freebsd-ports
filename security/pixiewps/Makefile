# Created by: Franz Bettag <franz@bett.ag>
# $FreeBSD: head/security/pixiewps/Makefile 436247 2017-03-15 14:45:30Z mat $

PORTNAME=	pixiewps
PORTVERSION=	1.2.2
DISTVERSIONPREFIX= v
CATEGORIES=	security

MAINTAINER=	franz@bett.ag
COMMENT=	Offline WPS bruteforce utility

LICENSE=	GPLv3

USES=		gmake ssl
WRKSRC_SUBDIR=	src
USE_GITHUB=	yes
GH_ACCOUNT=	wiire

PLIST_FILES=	bin/pixiewps

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
