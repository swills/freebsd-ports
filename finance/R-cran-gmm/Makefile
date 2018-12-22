# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/finance/R-cran-gmm/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	gmm
DISTVERSION=	1.6-2
PORTREVISION=	1
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Generalized Method of Moments and Generalized Empirical Likelihood

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-sandwich>0:math/R-cran-sandwich
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
