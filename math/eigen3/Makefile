# $FreeBSD$

PORTNAME=	eigen
PORTVERSION=	3.3.8
CATEGORIES=	math
MASTER_SITES=	https://gitlab.com/libeigen/eigen/-/archive/${PORTVERSION}/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Lightweight library for vector and matrix math

LICENSE=	LGPL21 MPL20
LICENSE_COMB=	multi
LICENSE_FILE_LGPL21=	${WRKSRC}/COPYING.LGPL
LICENSE_FILE_MPL20=	${WRKSRC}/COPYING.MPL2

CMAKE_ARGS=	-DPKGCONFIG_INSTALL_DIR:PATH="libdata/pkgconfig"
USES=		cmake tar:bzip2
NO_BUILD=	yes
NO_ARCH=	yes

OPTIONS_DEFINE=	FULL
OPTIONS_SINGLE=		BLAS
OPTIONS_SINGLE_BLAS=	ATLAS GOTOBLAS OPENBLAS REFERENCE
OPTIONS_DEFAULT=	OPENBLAS FULL

ATLAS_DESC=         	ATLAS blas implementation
GOTOBLAS_DESC=		GotoBLAS blas implementation
OPENBLAS_DESC=		OpenBLAS blas implementation
REFERENCE_DESC=		Reference blas implementation

FULL_DESC=	Add the support for math dependencies
FULL_CMAKE_ON=	-DBLAS_DIR:PATH="${LOCALBASE}"
FULL_USES=	gl pkgconfig
FULL_USE=	GL=gl glew glut
FULL_LIB_DEPENDS=	libcholmod.so:math/suitesparse	\
			libsuperlu.so:math/superlu	\
			libadolc.so:math/adol-c		\
			libfftw3.so:math/fftw3		\
			libmpfr.so:math/mpfr		\
			libgmp.so:math/gmp		\
			libboost_thread.so:devel/boost-libs

.include <bsd.port.mk>

.if ${PORT_OPTIONS:MFULL}
ATLAS_USES=		blaslapack:atlas
ATLAS_CMAKE_ON=		-DBLA_VENDOR:STRING="ATLAS"
GOTOBLAS_USES=		blaslapack:gotoblas
GOTOBLAS_CMAKE_ON=	-DBLA_VENDOR:STRING="Goto"
OPENBLAS_USES=		blaslapack:openblas
OPENBLAS_CMAKE_ON=	-DBLA_VENDOR:STRING="Open"
REFERENCE_USES=		blaslapack
REFERENCE_CMAKE_ON=	-DBLA_VENDOR:STRING="Generic"
.endif			


