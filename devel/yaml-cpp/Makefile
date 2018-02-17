# Created by: Tim Niemueller <tim@niemueller.de>
# $FreeBSD: head/devel/yaml-cpp/Makefile 462092 2018-02-17 10:12:29Z madpilot $

PORTNAME=	yaml-cpp
PORTVERSION=	0.6.1
DISTVERSIONPREFIX=	${PORTNAME}-
CATEGORIES=	devel

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	YAML parser and emitter in C++ matching the YAML 1.2 spec

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	jbeder

USES=		cmake
USE_LDCONFIG=	yes
CMAKE_ARGS+=	-DBUILD_SHARED_LIBS:BOOL=ON -DYAML_CPP_BUILD_TOOLS=0

.include <bsd.port.mk>
