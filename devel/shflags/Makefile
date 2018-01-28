# Created by: Yi-Jheng Lin <yzlin@FreeBSD.org>
# $FreeBSD: head/devel/shflags/Makefile 460016 2018-01-26 18:10:51Z sunpoet $

PORTNAME=	shflags
PORTVERSION=	1.2.3
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Command-line flags module for Unix shell scripts

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	lib/shflags

GH_ACCOUNT=	kward
USE_GITHUB=	yes

do-install:
	${INSTALL_DATA} ${WRKSRC}/shflags ${STAGEDIR}${PREFIX}/lib/

.include <bsd.port.mk>
