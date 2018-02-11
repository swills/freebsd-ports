# $FreeBSD: head/graphics/kipi-plugin-facebook/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	2
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	libqjson.so:devel/qjson

KIPI_PLUGIN=	facebook
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
