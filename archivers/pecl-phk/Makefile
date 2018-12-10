# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: head/archivers/pecl-phk/Makefile 486751 2018-12-06 11:22:12Z rene $

PORTNAME=	phk
PORTVERSION=	3.0.1
PORTREVISION=	1
CATEGORIES=	archivers pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHK is a PHP-oriented package/archive system

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

LICENSE=	PHP301

USES=		php:pecl
USE_PHP=	hash:build
IGNORE_WITH_PHP=	71 72 73

CONFIGURE_ARGS=	--enable-phk

.include <bsd.port.mk>
