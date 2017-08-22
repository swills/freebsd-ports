# Created by: Yi-Jheng Lin <yzlin@FreeBSD.org>
# $FreeBSD: head/devel/shflags/Makefile 448285 2017-08-19 07:21:50Z vanilla $

PORTNAME=	shflags
PORTVERSION=	1.2.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Command-line flags module for Unix shell scripts

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	kward

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	lib/shflags

do-install:
	${INSTALL_DATA} ${WRKSRC}/src/shflags ${STAGEDIR}${PREFIX}/lib

.include <bsd.port.mk>
