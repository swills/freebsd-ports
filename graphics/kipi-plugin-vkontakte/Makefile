# $FreeBSD: head/graphics/kipi-plugin-vkontakte/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	2
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	libkvkontakte.so:net/libkvkontakte

KIPI_PLUGIN=	vkontakte
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
