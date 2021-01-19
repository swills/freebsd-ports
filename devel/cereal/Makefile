# $FreeBSD$

PORTNAME=		cereal
DISTVERSIONPREFIX=	v
DISTVERSION=	1.3.0-8
DISTVERSIONSUFFIX=	-g48fda3f0
CATEGORIES=	devel

MAINTAINER=	teodor@sigaev.ru
COMMENT=	C++11 library for serialization

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	boost-libs>0:devel/boost-libs
RUN_DEPENDS=	boost-libs>0:devel/boost-libs

USES=		cmake compiler:c++11-lang

USE_GITHUB=	yes
GH_ACCOUNT=	USCiLab

CFLAGS+=	-Wno-unused-private-field

CMAKE_ON=	SKIP_PORTABILITY_TEST
CMAKE_OFF=	BUILD_TESTS WITH_WERROR

NO_ARCH=	yes

.include <bsd.port.mk>
