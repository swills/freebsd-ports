# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-units/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	units
DISTVERSION=	0.4-6
PORTREVISION=	1
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Measurement Units for R Vectors

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-udunits2>=0.13:science/R-cran-udunits2
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
