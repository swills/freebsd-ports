# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/www/pecl-http1/Makefile 438175 2017-04-10 15:08:47Z mat $

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
IGNORE_WITH_PHP=	70
CONFLICTS=	pecl-http-*

CONFIGURE_ARGS+=	--with-http-curl-requests \
			--with-http-zlib-compression \
			--with-http-magic-mime

.include <bsd.port.mk>
