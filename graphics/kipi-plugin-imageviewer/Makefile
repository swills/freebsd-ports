# $FreeBSD: head/graphics/kipi-plugin-imageviewer/Makefile 441503 2017-05-23 05:03:14Z rezny $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	2
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

USE_GL=		glu
USE_XORG=	xrandr

KIPI_PLUGIN=	imageviewer
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
