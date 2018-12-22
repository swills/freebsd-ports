# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/math/R-cran-maxLik/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	maxLik
DISTVERSION=	1.3-4
PORTREVISION=	2
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Maximum Likelihood Estimation and Related Tools

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

BUILD_DEPENDS=	R-cran-miscTools>=0.6.8:math/R-cran-miscTools \
		R-cran-sandwich>=0:math/R-cran-sandwich
RUN_DEPENDS=	R-cran-miscTools>=0.6.8:math/R-cran-miscTools \
		R-cran-sandwich>=0:math/R-cran-sandwich

USES=	cran:auto-plist

.include <bsd.port.mk>
