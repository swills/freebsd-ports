# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-units/Makefile 480658 2018-09-25 10:44:45Z tota $

PORTNAME=	units
DISTVERSION=	0.6-1
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Measurement Units for R Vectors

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-Rcpp>0:devel/R-cran-Rcpp
LIB_DEPENDS=	libudunits2.so:science/udunits
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
