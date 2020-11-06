# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD$

PORTNAME=	memcached
PORTVERSION=	3.1.5
PORTREVISION=	1
CATEGORIES=	databases

PATCH_SITES=	https://github.com/php-memcached-dev/php-memcached/commit/
PATCHFILES+=	c94e014da53cc8a3d0510402f36bc6e5e17bf608.diff:-p1

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PHP extension for interfacing with memcached via libmemcached library

LICENSE=	PHP30
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	libmemcached>=1.0.18:databases/libmemcached
LIB_DEPENDS=	libmemcached.so:databases/libmemcached

USES=		php:pecl pkgconfig
USE_PHP=	json:build session:build

CONFIGURE_ARGS=	--with-libmemcached-dir=${LOCALBASE}

OPTIONS_DEFINE=	IGBINARY SASL
OPTIONS_DEFAULT=SASL
IGBINARY_DESC=	Binary serializer support

IGBINARY_CONFIGURE_ENABLE=	memcached-igbinary
IGBINARY_USE=		PHP=igbinary:build
SASL_CONFIGURE_ENABLE=	memcached-sasl
SASL_LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2

.include <bsd.port.mk>
