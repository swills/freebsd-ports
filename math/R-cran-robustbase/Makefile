# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-robustbase/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	robustbase
DISTVERSION=	0.93-3
PORTREVISION=	1
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Basic Robust Statistics

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-DEoptimR>0:math/R-cran-DEoptimR
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
