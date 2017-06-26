# Created by: David Naylor <naylor.b.david@gmail.com>
# $FreeBSD: head/finance/R-cran-tseries/Makefile 444189 2017-06-23 19:03:23Z dbn $

PORTNAME=	tseries
DISTVERSION=	0.10-42
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	dbn@FreeBSD.org
COMMENT=	Time Series Analysis and Computational Finance

LICENSE=	GPLv2

RUN_DEPENDS=	R-cran-quantmod>=0.4.9:finance/R-cran-quantmod \
		R-cran-quadprog>0:math/R-cran-quadprog \
		R-cran-zoo>0:math/R-cran-zoo

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
