# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/www/pecl-http2/Makefile 461158 2018-02-07 17:46:10Z mat $

PORTNAME=	http
PORTVERSION=	2.6.0
CATEGORIES=	www
PKGNAMESUFFIX=	2
DISTNAME=	pecl_${PORTNAME}-${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Extended HTTP Support

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/lib/php/${PHP_EXT_DIR}/raphf.so:devel/pecl-raphf \
		${LOCALBASE}/lib/php/${PHP_EXT_DIR}/propro.so:devel/pecl-propro \
		re2c:devel/re2c
RUN_DEPENDS=	${LOCALBASE}/lib/php/${PHP_EXT_DIR}/raphf.so:devel/pecl-raphf \
		${LOCALBASE}/lib/php/${PHP_EXT_DIR}/propro.so:devel/pecl-propro
LIB_DEPENDS=	libcurl.so:ftp/curl \
		libevent.so:devel/libevent

IGNORE_WITH_PHP=70 71 72
USES=		php:pecl
CONFLICTS=	pecl-http1* pecl-http-*

.include <bsd.port.mk>
