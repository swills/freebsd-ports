# $FreeBSD: head/math/armadillo/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	armadillo
PORTVERSION=	8.400.0
PORTREVISION=	1
CATEGORIES=	math
MASTER_SITES=	SF/arma

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	C++ linear algebra library

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BROKEN_powerpc64=	Does not build

LIB_DEPENDS=	libboost_date_time.so:devel/boost-libs \
		libopenblasp.so:math/openblas \
		libarpack.so:math/arpack \
		libhdf5.so:science/hdf5 \
		libsuperlu.so:math/superlu \
		libsz.so:science/szip

USES=		blaslapack cmake compiler:c++11-lang pkgconfig tar:xz
USE_LDCONFIG=	yes
CMAKE_ARGS+=	-DPKG_CONFIG_DIR=${LOCALBASE}/libdata/pkgconfig/

.include <bsd.port.mk>
