# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-evaluate/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	evaluate
PORTVERSION=	0.10.1
PORTREVISION=	1
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Parsing and Evaluation Tools

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-stringr>=0.6.2:textproc/R-cran-stringr
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
