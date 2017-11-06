# Created by: Yi-Jheng Lin <yzlin@FreeBSD.org>
# $FreeBSD: head/devel/shflags/Makefile 453093 2017-10-29 07:04:12Z vanilla $

PORTNAME=	shflags
PORTVERSION=	1.2.2
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
	${INSTALL_DATA} ${WRKSRC}/shflags ${STAGEDIR}${PREFIX}/lib

.include <bsd.port.mk>
