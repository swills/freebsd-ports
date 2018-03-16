# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/ftp/R-cran-curl/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	curl
PORTVERSION=	3.1
PORTREVISION=	1
CATEGORIES=	ftp
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Modern and Flexible Web Client for R

LICENSE=	MIT

BUILD_DEPENDS=	${LOCALBASE}/include/curl/curl.h:ftp/curl
LIB_DEPENDS=	libcurl.so:ftp/curl

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
