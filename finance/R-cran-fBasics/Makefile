# Created by: David Naylor <naylor.b.david@gmail.com>
# $FreeBSD: head/finance/R-cran-fBasics/Makefile 456604 2017-12-18 09:04:34Z dbn $

PORTNAME=	fBasics
DISTVERSION=	3042.89
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	dbn@FreeBSD.org
COMMENT=	Rmetrics - Markets and Basic Statistics

LICENSE=	GPLv2+

RUN_DEPENDS=	R-cran-timeDate>0:finance/R-cran-timeDate \
		R-cran-timeSeries>0:finance/R-cran-timeSeries \
		R-cran-gss>0:math/R-cran-gss \
		R-cran-stabledist>0:math/R-cran-stabledist
TEST_DEPENDS=	R-cran-RUnit>0:devel/R-cran-RUnit

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
