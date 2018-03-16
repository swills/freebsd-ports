# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-quantreg/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	quantreg
PORTVERSION=	5.33
PORTREVISION=	1
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Quantile Regression

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-SparseM>0:math/R-cran-SparseM \
		R-cran-MatrixModels>0:math/R-cran-MatrixModels
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
