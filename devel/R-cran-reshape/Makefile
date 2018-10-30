# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-reshape/Makefile 482895 2018-10-24 08:56:40Z tota $

PORTNAME=	reshape
PORTVERSION=	0.8.8
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
