# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-ipred/Makefile 477776 2018-08-22 08:35:14Z tota $

PORTNAME=	ipred
DISTVERSION=	0.9-7
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Improved Predictors

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-prodlim>0:math/R-cran-prodlim
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
