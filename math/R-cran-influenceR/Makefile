# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-influenceR/Makefile 418937 2016-07-22 23:42:49Z tota $

PORTNAME=	influenceR
PORTVERSION=	0.1.0
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
