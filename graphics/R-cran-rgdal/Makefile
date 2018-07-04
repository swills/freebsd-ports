# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/graphics/R-cran-rgdal/Makefile 473686 2018-07-01 22:24:31Z tota $

PORTNAME=	rgdal
DISTVERSION=	1.3-3
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Bindings for the Geospatial Data Abstraction Library

LICENSE=	GPLv2+

LIB_DEPENDS=	libgdal.so:graphics/gdal \
		libproj.so:graphics/proj
CRAN_DEPENDS=	R-cran-sp>=1.1.0:math/R-cran-sp
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist,compiles pkgconfig

.include <bsd.port.mk>
