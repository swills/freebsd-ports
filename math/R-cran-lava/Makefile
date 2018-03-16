# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-lava/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	lava
DISTVERSION=	1.5.1
PORTREVISION=	1
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Latent Variable Models

LICENSE=	GPLv3

CRAN_DEPENDS=	R-cran-numDeriv>0:math/R-cran-numDeriv
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
