# Created by: Franz Bettag <franz@bett.ag>
# $FreeBSD: head/security/pixiewps/Makefile 453284 2017-11-01 13:10:35Z olgeni $

PORTNAME=	pixiewps
PORTVERSION=	1.2.2
DISTVERSIONPREFIX=	v
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
