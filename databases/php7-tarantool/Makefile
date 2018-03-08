# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/databases/php7-tarantool/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	tarantool
PORTVERSION=	0.3.0
PORTREVISION=	1
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
