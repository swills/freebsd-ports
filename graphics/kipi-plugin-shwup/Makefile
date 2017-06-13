# $FreeBSD: head/graphics/kipi-plugin-shwup/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	1
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	libqca.so:devel/qca

KIPI_PLUGIN=	shwup
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
