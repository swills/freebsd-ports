# $FreeBSD: head/devel/R-cran-randomForest/Makefile 436780 2017-03-23 21:09:22Z skreuzer $

PORTNAME=	randomForest
DISTVERSION=	4.6-12
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Classification based on a forest of trees using random inputs

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	R-cran-RColorBrewer>=1.0.5_6:graphics/R-cran-RColorBrewer

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
