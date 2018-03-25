# $FreeBSD: head/graphics/kipi-plugin-gpssync/Makefile 465097 2018-03-20 17:19:01Z tcberner $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	9
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

BUILD_DEPENDS=	${LOCALBASE}/include/boost/graph/buffer_concepts.hpp:devel/boost-libs
LIB_DEPENDS=	libkgeomap.so:astro/libkgeomap-kde4

KIPI_PLUGIN=	gpssync
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
