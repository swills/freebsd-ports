# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-memoise/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	memoise
PORTVERSION=	1.1.0
PORTREVISION=	1
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
