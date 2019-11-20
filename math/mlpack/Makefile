# $FreeBSD$

PORTNAME=	mlpack
DISTVERSION=	3.2.1
CATEGORIES=	math
MASTER_SITES=	http://mlpack.org/files/

MAINTAINER=	robert.ayrapetyan@gmail.com
COMMENT=	Fast, flexible machine learning library

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	ensmallen>0:math/ensmallen
LIB_DEPENDS=	libarmadillo.so:math/armadillo \
		libboost_serialization.so:devel/boost-libs \
		libomp.so:devel/openmp

USES=		cmake compiler:c++11-lang pkgconfig
CMAKE_OFF=	BUILD_TESTS BUILD_CLI_EXECUTABLES BUILD_PYTHON_BINDINGS DOWNLOAD_STB_IMAGE
USE_LDCONFIG=	yes

.include <bsd.port.mk>
