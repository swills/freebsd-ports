# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/www/R-cran-selectr/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	selectr
DISTVERSION=	0.4-1
PORTREVISION=	1
CATEGORIES=	www
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Translate CSS Selectors to XPath Expressions

LICENSE=	BSD3CLAUSE

CRAN_DEPENDS=	R-cran-stringr>0:textproc/R-cran-stringr \
		R-cran-R6>0:devel/R-cran-R6
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
