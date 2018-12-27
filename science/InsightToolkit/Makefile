# Created by: bacon@smithers.neuro.mcw.edu
# $FreeBSD$

PORTNAME=	InsightToolkit
PORTVERSION=	4.13.0
PORTREVISION=	6
CATEGORIES=	science biology
MASTER_SITES=	SF/itk/itk/${ITK_VER}

MAINTAINER=	woodsb02@FreeBSD.org
COMMENT=	Insight Toolkit

LICENSE=	APACHE20

BUILD_DEPENDS=	googletest>=0:devel/googletest
LIB_DEPENDS=	libgdcmCommon.so:devel/gdcm \
		libexpat.so:textproc/expat2 \
		libfftw.so:math/fftw \
		libhdf5.so:science/hdf5 \
		libpng.so:graphics/png \
		libsz.so:science/szip \
		libtiff.so:graphics/tiff

USES=		cmake compiler:c11 jpeg
CMAKE_ARGS+=	-DBUILD_SHARED_LIBS:BOOL=ON \
		-DITK_USE_KWSTYLE:BOOL=OFF \
		-DITK_USE_SYSTEM_LIBRARIES:BOOL=ON \
		-DITK_USE_SYSTEM_EXPAT:BOOL=ON \
		-DITK_USE_SYSTEM_FFTW:BOOL=ON \
		-DITK_USE_SYSTEM_GDCM:BOOL=ON \
		-DITK_USE_SYSTEM_HDF5:BOOL=ON \
		-DITK_USE_SYSTEM_JPEG:BOOL=ON \
		-DITK_USE_SYSTEM_PNG:BOOL=ON \
		-DITK_USE_SYSTEM_TIFF:BOOL=ON \
		-DITK_USE_SYSTEM_ZLIB:BOOL=ON
USE_LDCONFIG=	${PREFIX}/lib/InsightToolkit
ITK_VER=	${PORTVERSION:R}
PLIST_SUB+=	ITK_VER=${ITK_VER}

OPTIONS_DEFINE=			EXAMPLES TESTING ITKV3_COMPATIBILITY
OPTIONS_DEFAULT=		ITKV3_COMPATIBILITY # ITKV3_COMPATIBILITY=ON is needed for itk-snap
OPTIONS_SUB=			yes

EXAMPLES_DESC=			Build examples (very time consuming)
TESTING_DESC=			Build testing programs (very time consuming)
ITKV3_COMPATIBILITY_DESC=	Enable compatibility with ITK3.x when possible.

EXAMPLES_CMAKE_BOOL=		BUILD_EXAMPLES
TESTING_CMAKE_BOOL=		BUILD_TESTING
ITKV3_COMPATIBILITY_CMAKE_BOOL=	ITKV3_COMPATIBILITY

.include <bsd.port.mk>
