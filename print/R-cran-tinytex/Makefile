# $FreeBSD: head/print/R-cran-tinytex/Makefile 474553 2018-07-13 05:52:39Z tota $

PORTNAME=	tinytex
DISTVERSION=	0.6
CATEGORIES=	print
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Helper functions to maintain LaTeX distribution

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-xfun>=0.3:misc/R-cran-xfun
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
