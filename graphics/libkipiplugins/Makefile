# $FreeBSD: head/graphics/libkipiplugins/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	libkipiplugins
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	1
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

KIPI_PLUGIN=	libkipiplugins
.include "${.CURDIR}/../digikam-kde4/Makefile.common"

USE_KDE+=	libkdcraw libkexiv2 libkipi
USE_LDCONFIG=	yes

.include <bsd.port.mk>
