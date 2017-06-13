# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/databases/php5-tarantool/Makefile 433543 2017-02-07 12:14:34Z mat $

PORTNAME=	tarantool
PORTVERSION=	${TR_VER}
PORTREVISION=	1
CATEGORIES=	databases
PKGNAMEPREFIX=	php5-

MAINTAINER=	vg@FreeBSD.org
COMMENT=	PECL PHP driver for Tarantool/Box

USES=		php:ext
USE_GITHUB=	yes

GH_PROJECT=	${PORTNAME}-php
GH_TAGNAME=	c1c5d5f
TR_VER=		20151222
IGNORE_WITH_PHP=	70 71

CONFIGURE_ARGS+=	--with-tarantool

.include <bsd.port.mk>
