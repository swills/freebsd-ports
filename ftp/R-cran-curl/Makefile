# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/ftp/R-cran-curl/Makefile 440307 2017-05-07 06:15:30Z tota $

PORTNAME=	curl
PORTVERSION=	2.6
CATEGORIES=	ftp
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Modern and Flexible Web Client for R

LICENSE=	MIT

BUILD_DEPENDS=	${LOCALBASE}/include/curl/curl.h:ftp/curl
LIB_DEPENDS=	libcurl.so:ftp/curl

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
