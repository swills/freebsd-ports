# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pecl-inotify/Makefile 486751 2018-12-06 11:22:12Z rene $

PORTNAME=	inotify
PORTVERSION=	0.1.6
PORTREVISION=	2
CATEGORIES=	devel

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	This extension allows to use inotify functions in a PHP scripts

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

LICENSE=	PHP301

LIB_DEPENDS=	libinotify.so:devel/libinotify

USES=		php:pecl
IGNORE_WITH_PHP=	71 72 73

.include <bsd.port.mk>
