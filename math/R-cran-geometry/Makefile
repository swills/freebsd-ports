# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-geometry/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	geometry
DISTVERSION=	0.3-6
PORTREVISION=	1
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Mesh Generation and Surface Tesselation

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cran:auto-plist,compiles

CRAN_DEPENDS=	R-cran-magic>0:math/R-cran-magic
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

.include <bsd.port.mk>
