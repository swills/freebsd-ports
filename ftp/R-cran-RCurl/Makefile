# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/ftp/R-cran-RCurl/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	RCurl
DISTVERSION=	1.95-4.11
PORTREVISION=	1
CATEGORIES=	ftp
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	General network client interface for R

LICENSE=	BSD3CLAUSE

CRAN_DEPENDS=	R-cran-bitops>0:devel/R-cran-bitops
BUILD_DEPENDS=	curl-config:ftp/curl \
		${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}
LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
