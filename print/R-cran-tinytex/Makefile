# $FreeBSD: head/print/R-cran-tinytex/Makefile 477939 2018-08-24 06:45:55Z tota $

PORTNAME=	tinytex
DISTVERSION=	0.7
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
