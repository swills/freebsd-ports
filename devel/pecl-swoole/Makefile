# Created by: vanilla@
# $FreeBSD: head/devel/pecl-swoole/Makefile 471400 2018-06-02 19:40:59Z linimon $

PORTNAME=	swoole
PORTVERSION=	1.10.5
CATEGORIES=	devel net

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Asynchronous & concurrent & distributed networking framework

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c11 localbase:ldflags php:pecl ssl
USE_PHP=	pcre

OPTIONS_DEFINE=	HTTP2 REDIS SOCKETS
HTTP2_LIB_DEPENDS=	libnghttp2.so:www/libnghttp2
HTTP2_CONFIGURE_ON=	--enable-http2 --enable-openssl
REDIS_LIB_DEPENDS=	libhiredis.so:databases/hiredis
REDIS_CONFIGURE_ON=	--enable-async-redis
SOCKETS_USE=	PHP=sockets:build
SOCKETS_DESC=	Use native php sockets extension
SOCKETS_CONFIGURE_ON=	--enable-sockets

.include <bsd.port.mk>
