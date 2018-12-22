# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-memoise/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	memoise
PORTVERSION=	1.1.0
PORTREVISION=	2
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Memoise functions for R

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-digest>=0.6.3:security/R-cran-digest
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
