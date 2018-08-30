# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/science/R-cran-etm/Makefile 477639 2018-08-20 09:30:52Z tota $

PORTNAME=	etm
DISTVERSION=	1.0.4
CATEGORIES=	science
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Empirical Transition Matrix

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-data.table>0:devel/R-cran-data.table \
		R-cran-Rcpp>=0.11.4:devel/R-cran-Rcpp \
		R-cran-RcppArmadillo>0:math/R-cran-RcppArmadillo
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
