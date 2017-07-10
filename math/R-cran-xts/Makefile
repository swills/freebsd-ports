# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-xts/Makefile 445366 2017-07-09 03:33:57Z tota $

PORTNAME=	xts
DISTVERSION=	0.10-0
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Extensible Time Series

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-zoo>=1.7.12:math/R-cran-zoo
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
