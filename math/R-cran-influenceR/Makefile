# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-influenceR/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	influenceR
PORTVERSION=	0.1.0
PORTREVISION=	2
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Software Tools to Quantify Structural Importance of Nodes in a Network

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-igraph>0:math/R-cran-igraph
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
