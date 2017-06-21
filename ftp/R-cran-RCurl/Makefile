# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/ftp/R-cran-RCurl/Makefile 443845 2017-06-18 18:09:16Z dbn $

PORTNAME=	RCurl
PORTREVISION=	1
DISTVERSION=	1.95-4.8
CATEGORIES=	ftp
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	General network client interface for R

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	curl-config:ftp/curl
RUN_DEPENDS=	R-cran-bitops>0:devel/R-cran-bitops
LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
