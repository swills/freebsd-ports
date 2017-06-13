# $FreeBSD: head/graphics/kipi-plugin-dngconverter/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	1
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	libexpat.so:textproc/expat2

KIPI_PLUGIN=	dngconverter
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
