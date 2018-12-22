# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-lava/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	lava
DISTVERSION=	1.6.4
PORTREVISION=	1
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Latent Variable Models

LICENSE=	GPLv3

CRAN_DEPENDS=	R-cran-numDeriv>0:math/R-cran-numDeriv \
		R-cran-SQUAREM>0:math/R-cran-SQUAREM
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
