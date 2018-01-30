# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/math/R-cran-MatchIt/Makefile 460302 2018-01-29 13:31:39Z wen $

PORTNAME=	MatchIt
DISTVERSION=	3.0.2
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Nonparametric Preprocessing for Parametric Casual Inference

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

BUILD_DEPENDS=	R-cran-Matching>=0:math/R-cran-Matching \
		R-cran-rgenoud>=0:math/R-cran-rgenoud
RUN_DEPENDS=	R-cran-Matching>=0:math/R-cran-Matching \
		R-cran-rgenoud>=0:math/R-cran-rgenoud

USES=		cran:auto-plist

.include <bsd.port.mk>
