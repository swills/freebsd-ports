# $FreeBSD: head/graphics/kipi-plugin-gpssync/Makefile 459315 2018-01-18 04:11:02Z jbeich $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	7
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

BUILD_DEPENDS=	${LOCALBASE}/include/boost/graph/buffer_concepts.hpp:devel/boost-libs
LIB_DEPENDS=	libkgeomap.so:astro/libkgeomap

KIPI_PLUGIN=	gpssync
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
