# $FreeBSD: head/devel/corrade/Makefile 493329 2019-02-18 22:01:50Z yuri $

PORTNAME=	corrade
DISTVERSIONPREFIX=	v
DISTVERSION=	2019.01
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++11/C++14 multiplatform utility library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake compiler:c++14-lang
USE_GITHUB=	yes
GH_ACCOUNT=	mosra
GH_TUPLE=	mosra:toolchains:a3e0aff:t/toolchains
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DLIB_SUFFIX:STRING=""

.include <bsd.port.mk>
