# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/math/R-cran-survey/Makefile 488648 2018-12-29 03:16:34Z wen $

PORTNAME=	survey
DISTVERSION=	3.35
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Analysis of complex survey samples

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

CRAN_DEPENDS=	R-cran-minqa>=1.1.15:math/R-cran-minqa \
		R-cran-numDeriv>=0:math/R-cran-numDeriv
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
