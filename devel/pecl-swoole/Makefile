# Created by: vanilla@
# $FreeBSD: head/devel/pecl-swoole/Makefile 483651 2018-11-01 09:39:07Z vanilla $

PORTNAME=	swoole
PORTVERSION=	4.2.5
CATEGORIES=	devel net

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Asynchronous & concurrent & distributed networking framework

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c11 localbase:ldflags php:pecl ssl
USE_PHP=	hash:build pcre

IGNORE_WITH_PHP=	56
CONFIGURE_ARGS+=	--enable-mysqlnd

OPTIONS_DEFINE=	HTTP2 REDIS SOCKETS PGSQL
HTTP2_LIB_DEPENDS=	libnghttp2.so:www/libnghttp2
HTTP2_CONFIGURE_ON=	--enable-http2 --enable-openssl
REDIS_LIB_DEPENDS=	libhiredis.so:databases/hiredis
REDIS_CONFIGURE_ON=	--enable-async-redis
SOCKETS_USE=	PHP=sockets:build
SOCKETS_DESC=	Use native php sockets extension
SOCKETS_CONFIGURE_ON=	--enable-sockets
PGSQL_USES=	pgsql
PGSQL_CONFIGURE_ON=	--enable-coroutine-postgresql

.include <bsd.port.mk>
