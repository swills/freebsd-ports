# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-prodlim/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	prodlim
PORTVERSION=	1.6.1
PORTREVISION=	1
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Product-Limit Estimation for Censored Event History Analysis

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-Rcpp>=0.11.5:devel/R-cran-Rcpp \
		R-cran-lava>0:math/R-cran-lava
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
