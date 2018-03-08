# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/www/pecl-http/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	http
PORTVERSION=	3.1.0
CATEGORIES=	www
DISTNAME=	pecl_${PORTNAME}-${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Extended HTTP Support

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/lib/php/${PHP_EXT_DIR}/raphf.so:devel/pecl-raphf2@${PHP_FLAVOR} \
		${LOCALBASE}/lib/php/${PHP_EXT_DIR}/propro.so:devel/pecl-propro2@${PHP_FLAVOR} \
		re2c:devel/re2c
RUN_DEPENDS=	${LOCALBASE}/lib/php/${PHP_EXT_DIR}/raphf.so:devel/pecl-raphf2@${PHP_FLAVOR} \
		${LOCALBASE}/lib/php/${PHP_EXT_DIR}/propro.so:devel/pecl-propro2@${PHP_FLAVOR}
LIB_DEPENDS=	libcurl.so:ftp/curl \
		libevent.so:devel/libevent

BROKEN_powerpc64=	Does not build

IGNORE_WITH_PHP=	56
USES=		php:pecl
USE_PHP=	zlib:build
CONFLICTS=	pecl-http[12]*

.include <bsd.port.mk>
