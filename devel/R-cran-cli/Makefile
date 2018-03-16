# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-cli/Makefile 464236 2018-03-12 08:35:06Z tota $

PORTNAME=	cli
PORTVERSION=	1.0.0
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Helpers for Developing Command Line Interfaces

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-assertthat>0:math/R-cran-assertthat \
		R-cran-crayon>0:devel/R-cran-crayon
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
