# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-ModelMetrics/Makefile 477646 2018-08-20 10:34:48Z tota $

PORTNAME=	ModelMetrics
PORTVERSION=	1.2.0
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Rapid Calculation of Model Metrics

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-Rcpp>0:devel/R-cran-Rcpp \
		R-cran-data.table>0:devel/R-cran-data.table
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
