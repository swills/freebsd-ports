# $FreeBSD: head/graphics/kipi-plugin-removeredeyes/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	3
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	libopencv_legacy.so:graphics/opencv

KIPI_PLUGIN=	removeredeyes
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
