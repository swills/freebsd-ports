# $FreeBSD: head/devel/R-cran-randomForest/Makefile 465698 2018-03-27 12:47:15Z skreuzer $

PORTNAME=	randomForest
DISTVERSION=	4.6-14
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Classification based on a forest of trees using random inputs

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	R-cran-RColorBrewer>=1.0.5_6:graphics/R-cran-RColorBrewer

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
