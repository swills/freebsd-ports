# $FreeBSD: head/graphics/kipi-plugin-imageviewer/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	3
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

USE_GL=		glu
USE_XORG=	xrandr

KIPI_PLUGIN=	imageviewer
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
