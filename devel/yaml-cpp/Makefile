# Created by: Tim Niemueller <tim@niemueller.de>
# $FreeBSD: head/devel/yaml-cpp/Makefile 459315 2018-01-18 04:11:02Z jbeich $

PORTNAME=	yaml-cpp
PORTVERSION=	0.5.3
DISTVERSIONPREFIX=	release-
PORTREVISION=	7
CATEGORIES=	devel

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	YAML parser and emitter in C++ matching the YAML 1.2 spec

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/include/boost/shared_ptr.hpp:devel/boost-libs
RUN_DEPENDS=	${LOCALBASE}/include/boost/shared_ptr.hpp:devel/boost-libs

USE_GITHUB=	yes
GH_ACCOUNT=	jbeder

USES=		cmake
USE_LDCONFIG=	yes
CMAKE_ARGS+=	-DBUILD_SHARED_LIBS:BOOL=ON -DYAML_CPP_BUILD_TOOLS=0

.include <bsd.port.mk>
