# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/graphics/R-cran-rtiff/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	rtiff
PORTVERSION=	1.4.5
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	TIFF reader for R

LICENSE=	GPLv3

LIB_DEPENDS=	libtiff.so:graphics/tiff
RUN_DEPENDS=	R-cran-pixmap>0:graphics/R-cran-pixmap

USES=	cran:auto-plist

LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
