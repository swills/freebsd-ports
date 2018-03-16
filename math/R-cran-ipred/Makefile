# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-ipred/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	ipred
DISTVERSION=	0.9-6
PORTREVISION=	1
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
