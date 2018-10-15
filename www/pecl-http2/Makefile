# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/www/pecl-http2/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	http
PORTVERSION=	2.6.0
CATEGORIES=	www
DISTNAME=	pecl_${PORTNAME}-${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Extended HTTP Support

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/lib/php/${PHP_EXT_DIR}/raphf.so:devel/pecl-raphf@${PHP_FLAVOR} \
		${LOCALBASE}/lib/php/${PHP_EXT_DIR}/propro.so:devel/pecl-propro@${PHP_FLAVOR} \
		re2c:devel/re2c
RUN_DEPENDS=	${LOCALBASE}/lib/php/${PHP_EXT_DIR}/raphf.so:devel/pecl-raphf@${PHP_FLAVOR} \
		${LOCALBASE}/lib/php/${PHP_EXT_DIR}/propro.so:devel/pecl-propro@${PHP_FLAVOR}
LIB_DEPENDS=	libcurl.so:ftp/curl \
		libevent.so:devel/libevent

IGNORE_WITH_PHP=70 71 72 73
USES=		php:pecl
CONFLICTS=	pecl-http1* pecl-http-*

.include <bsd.port.mk>
