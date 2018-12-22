# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/math/R-cran-igraph/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	igraph
DISTVERSION=	1.2.2
PORTREVISION=	1
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Network Analysis and Visualization

LICENSE=	GPLv2+

BROKEN_sparc64=	Does not compile on sparc64: uses i386 assembler

LIB_DEPENDS=	libgmp.so:math/gmp
CRAN_DEPENDS=	R-cran-magrittr>0:devel/R-cran-magrittr \
		R-cran-pkgconfig>=2.0.0:devel/R-cran-pkgconfig
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles
USE_GNOME=	libxml2

.include <bsd.port.mk>
