# $FreeBSD: head/devel/R-cran-randomForest/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	randomForest
DISTVERSION=	4.6-12
PORTREVISION=	1
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Classification based on a forest of trees using random inputs

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	R-cran-RColorBrewer>=1.0.5_6:graphics/R-cran-RColorBrewer

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
