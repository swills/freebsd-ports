# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-magic/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	magic
DISTVERSION=	1.5-9
PORTREVISION=	1
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Create and Investigate Magic Squares

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-abind>0:devel/R-cran-abind
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
