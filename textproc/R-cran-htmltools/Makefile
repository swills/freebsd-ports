# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/textproc/R-cran-htmltools/Makefile 440297 2017-05-07 02:37:49Z tota $

PORTNAME=	htmltools
PORTVERSION=	0.3.6
CATEGORIES=	textproc
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Tools for HTML generation and output

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-digest>0:security/R-cran-digest \
		R-cran-Rcpp>0:devel/R-cran-Rcpp
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
