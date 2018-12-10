# Created by: John Chen <johnpupu@gmail.com>
# $FreeBSD: head/devel/pecl-event/Makefile 487188 2018-12-10 16:52:37Z joneum $

PORTNAME=	event
PORTVERSION=	2.4.2
CATEGORIES=	devel

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Provides interface to libevent library

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libevent.so:devel/libevent

USES=		php:pecl ssl
CONFIGURE_ARGS=	--with-openssl-dir=${OPENSSLBASE}
USE_PHP=	sockets:build

.include <bsd.port.mk>
