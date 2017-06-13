# $FreeBSD: head/graphics/kipi-plugin-videoslideshow/Makefile 441761 2017-05-26 08:20:18Z kwm $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	2
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	libMagickCore-6.so:graphics/ImageMagick \
		libQtGLib-2.0.so:multimedia/gstreamer1-qt4

KIPI_PLUGIN=	videoslideshow
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
