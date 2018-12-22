# $FreeBSD: head/textproc/R-cran-bibtex/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	bibtex
DISTVERSION=	0.4.2
PORTREVISION=	1
CATEGORIES=	textproc
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Bibtex Parser

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-stringr>0:textproc/R-cran-stringr
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
