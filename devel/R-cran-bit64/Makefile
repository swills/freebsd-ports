# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/R-cran-bit64/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	bit64
DISTVERSION=	0.9-7
PORTREVISION=	1
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	S3 Class for Vectors of 64bit Integers

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-bit>=1.1.12:devel/R-cran-bit
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
