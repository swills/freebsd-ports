# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-reshape/Makefile 427615 2016-12-03 14:33:15Z tota $

PORTNAME=	reshape
PORTVERSION=	0.8.6
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R package for flexibly restructuring and aggregating data

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-plyr>0:devel/R-cran-plyr
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
