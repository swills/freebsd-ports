# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/www/pecl-http1/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	http
PORTVERSION=	1.7.6
PORTREVISION=	1
CATEGORIES=	www
PKGNAMESUFFIX=	1
DISTNAME=	pecl_http-${PORTVERSION}

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Extended HTTP Support

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72
CONFLICTS=	pecl-http-*

CONFIGURE_ARGS+=	--with-http-curl-requests \
			--with-http-zlib-compression \
			--with-http-magic-mime

.include <bsd.port.mk>
