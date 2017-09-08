# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-tibble/Makefile 449293 2017-09-05 16:02:21Z tota $

PORTNAME=	tibble
PORTVERSION=	1.3.4
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Simple Data Frames

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-rlang>0:devel/R-cran-rlang \
		R-cran-Rcpp>=0.12.3:devel/R-cran-Rcpp
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
