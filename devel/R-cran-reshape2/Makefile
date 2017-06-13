# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-reshape2/Makefile 427614 2016-12-03 14:05:36Z tota $

PORTNAME=	reshape2
PORTVERSION=	1.4.2
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Flexibly reshape data: a reboot of the reshape package

LICENSE=	MIT

RUN_DEPENDS=	R-cran-plyr>=1.8.1:devel/R-cran-plyr \
		R-cran-stringr>0:textproc/R-cran-stringr \
		R-cran-Rcpp>0:devel/R-cran-Rcpp

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
