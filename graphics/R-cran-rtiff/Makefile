# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/graphics/R-cran-rtiff/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	rtiff
PORTVERSION=	1.4.5
PORTREVISION=	3
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	TIFF reader for R

LICENSE=	GPLv3

LIB_DEPENDS=	libtiff.so:graphics/tiff
RUN_DEPENDS=	R-cran-pixmap>0:graphics/R-cran-pixmap

USES=		cran:auto-plist,compiles

LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
