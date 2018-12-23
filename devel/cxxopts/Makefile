# $FreeBSD: head/devel/cxxopts/Makefile 488147 2018-12-22 23:20:53Z yuri $

PORTNAME=	cxxopts
DISTVERSIONPREFIX=	v
DISTVERSION=	2.1.1
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Lightweight C++ command line option parser

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:outsource compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	jarro2783

CMAKE_OFF=	CXXOPTS_BUILD_EXAMPLES

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	include/cxxopts.hpp \
		lib/cmake/cxxopts/cxxopts-config-version.cmake \
		lib/cmake/cxxopts/cxxopts-config.cmake \
		lib/cmake/cxxopts/cxxopts-targets.cmake

.include <bsd.port.mk>
