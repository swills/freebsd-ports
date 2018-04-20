# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-repr/Makefile 467455 2018-04-16 05:48:53Z tota $

PORTNAME=	repr
PORTVERSION=	0.13
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Serializable Reprensentations

LICENSE=	GPLv3

CRAN_DEPENDS=	R-cran-htmltools>0:textproc/R-cran-htmltools \
		R-cran-base64enc>0:converters/R-cran-base64enc
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
