# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-xts/Makefile 479755 2018-09-14 03:01:15Z tota $

PORTNAME=	xts
DISTVERSION=	0.11-1
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
