# $FreeBSD: head/math/mlpack/Makefile 484691 2018-11-11 13:32:31Z danilo $

PORTNAME=	mlpack
DISTVERSION=	3.0.1
PORTREVISION=	3
CATEGORIES=	math
MASTER_SITES=	http://mlpack.org/files/

MAINTAINER=	robert.ayrapetyan@gmail.com
COMMENT=	Fast, flexible machine learning library

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libboost_program_options.so:devel/boost-libs \
		libboost_unit_test_framework.so:devel/boost-libs \
		libboost_serialization.so:devel/boost-libs \
		libarmadillo.so:math/armadillo

USES=		cmake:outsource compiler:c++14-lang
CMAKE_ARGS+=	-DBUILD_TESTS:BOOL=false -DBUILD_CLI_EXECUTABLES=false -DBUILD_PYTHON_BINDINGS=false
USE_LDCONFIG=	yes

.include <bsd.port.mk>
