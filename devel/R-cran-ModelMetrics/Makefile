# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-ModelMetrics/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	ModelMetrics
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Rapid Calculation of Model Metrics

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-Rcpp>=0.11.0:devel/R-cran-Rcpp
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
