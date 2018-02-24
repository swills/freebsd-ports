# Created by: Franz Bettag <franz@bett.ag>
# $FreeBSD: head/security/pixiewps/Makefile 462676 2018-02-23 07:24:18Z yuri $

PORTNAME=	pixiewps
DISTVERSIONPREFIX=	v
DISTVERSION=	1.4.1
CATEGORIES=	security

MAINTAINER=	franz@bett.ag
COMMENT=	Offline WPS bruteforce utility

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/../LICENSE.md

USES=		gmake
WRKSRC_SUBDIR=	src
USE_GITHUB=	yes
GH_ACCOUNT=	wiire

PLIST_FILES=	bin/pixiewps

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
