# $FreeBSD: head/graphics/kipi-plugin-gpssync/Makefile 476723 2018-08-09 06:58:30Z jbeich $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	11
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

BUILD_DEPENDS=	${LOCALBASE}/include/boost/graph/buffer_concepts.hpp:devel/boost-libs
LIB_DEPENDS=	libkgeomap.so:astro/libkgeomap-kde4

KIPI_PLUGIN=	gpssync
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
