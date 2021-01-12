# $FreeBSD$

PORTNAME=		PrusaSlicer
DISTVERSIONPREFIX=	version_
DISTVERSION=		2.3.0
PORTREVISION=		1
CATEGORIES=		cad

MAINTAINER=	teodorsigaev@gmail.com
COMMENT=	Slicing application for 3D printers

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libtbb.so:devel/tbb \
		libboost_log.so:devel/boost-libs \
		libHalf.so:graphics/ilmbase \
		libnlopt.so:math/nlopt \
		libcurl.so:ftp/curl \
		libexpat.so:textproc/expat2 \
		libopenvdb.so:misc/openvdb \
		libgmp.so:math/gmp \
		libmpfr.so:math/mpfr \
		libdbus-1.so:devel/dbus 
BUILD_DEPENDS=	cereal>=1.2.2:devel/cereal \
		googletest>=1.7:devel/googletest \
		boost-libs>=1.64:devel/boost-libs \
		wx31-gtk3>=3.1:x11-toolkits/wxgtk31 \
		cmake>=3.2:devel/cmake \
		ninja>=1.8.2:devel/ninja \
		openvdb>=6.1.0:misc/openvdb \
		gmp>=6.1.2:math/gmp \
		mpfr>=4.0.2:math/mpfr \
		qt5-buildtools>=0:devel/qt5-buildtools \
		cgal>=5.0.2:math/cgal \
		dbus>=1.12:devel/dbus 

USES=		cmake eigen:3 gettext gl iconv pkgconfig

CMAKE_ARGS+= -DwxWidgets_CONFIG_EXECUTABLE=${LOCALBASE}/bin/wxgtk3u-3.1-config \
			-DSLIC3R_GTK=3
CMAKE_INSTALL_PREFIX=	${PREFIX}/${PORTNAME}

USE_GITHUB=	yes
GH_ACCOUNT=	prusa3d
USE_WX=		3.1
USE_GL=		gl glu glew

post-patch:
	${REINPLACE_CMD} -e 's,%%WRKSRC%%,${WRKSRC},' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
