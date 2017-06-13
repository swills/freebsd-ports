# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/www/R-cran-selectr/Makefile 429302 2016-12-24 01:29:39Z tota $

PORTNAME=	selectr
DISTVERSION=	0.3-1
CATEGORIES=	www
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Translate CSS Selectors to XPath Expressions

LICENSE=	BSD3CLAUSE

CRAN_DEPENDS=	R-cran-stringr>0:textproc/R-cran-stringr
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
