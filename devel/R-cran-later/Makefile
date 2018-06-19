# $FreeBSD: head/devel/R-cran-later/Makefile 472756 2018-06-19 05:28:34Z tota $

PORTNAME=	later
PORTVERSION=	0.7.3
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Utilities for Delaying Function Execution

LICENSE=	GPLv2+

USES=		cran:auto-plist,compiles

CRAN_DEPENDS=	R-cran-Rcpp>=0.12.9:devel/R-cran-Rcpp \
		R-cran-rlang>0:devel/R-cran-rlang \
		R-cran-BH>0:devel/R-cran-BH
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

.include <bsd.port.mk>
