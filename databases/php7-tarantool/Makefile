# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/databases/php7-tarantool/Makefile 467931 2018-04-22 08:47:42Z sunpoet $

PORTNAME=	tarantool
PORTVERSION=	0.3.2
CATEGORIES=	databases
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PECL PHP driver for Tarantool

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php:ext

CONFIGURE_ARGS=	--with-tarantool
IGNORE_WITH_PHP=56

USE_GITHUB=	yes
GH_PROJECT=	${PORTNAME}-php

.include <bsd.port.mk>
