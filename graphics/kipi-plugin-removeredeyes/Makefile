# $FreeBSD: head/graphics/kipi-plugin-removeredeyes/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	4
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	libopencv_legacy.so:graphics/opencv
# Ensure -L${LOCALBASE}/lib is in the linker flags, as 
# the cmake files do not properly handle opencv with tbb
# enabled.
USES+=		localbase:ldflags

KIPI_PLUGIN=	removeredeyes
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
