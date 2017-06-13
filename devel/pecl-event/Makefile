# Created by: John Chen <johnpupu@gmail.com>
# $FreeBSD: head/devel/pecl-event/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	event
PORTVERSION=	2.3.0
CATEGORIES=	devel

MAINTAINER=	johnpupu@gmail.com
COMMENT=	Provides interface to libevent library

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libevent.so:devel/libevent

USES=		php:pecl ssl
CONFIGURE_ARGS=	--with-openssl-dir=${OPENSSLBASE}
USE_PHP=	sockets:build

.include <bsd.port.mk>
