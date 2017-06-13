# $FreeBSD: head/security/libzrtpcppcore/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	libzrtpcppcore
PORTVERSION=	4.6.4
PORTREVISION=	1
DISTVERSIONPREFIX=	V
CATEGORIES=	security

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNU ZRTP library

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	wernerd
GH_PROJECT=	ZRTPCPP

USES=		cmake:outsource compiler:c++11-lib
USE_CXXSTD=	c++11
CMAKE_ARGS=	-DCORE_LIB:BOOL=ON
USE_LDCONFIG=	yes

.include <bsd.port.mk>
