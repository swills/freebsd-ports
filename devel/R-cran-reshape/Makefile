# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-reshape/Makefile 448859 2017-08-28 11:30:49Z tota $

PORTNAME=	reshape
PORTVERSION=	0.8.7
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
