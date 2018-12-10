# $FreeBSD: head/security/pecl-mcrypt/Makefile 486751 2018-12-06 11:22:12Z rene $

PORTNAME=	mcrypt
PORTVERSION=	1.0.1
CATEGORIES=	security pear

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	PHP extension for mcrypt, removed in PHP 7.2

LICENSE=	PHP301

IGNORE_WITH_PHP=	56 71

LIB_DEPENDS=	libltdl.so:devel/libltdl \
		libmcrypt.so:security/libmcrypt

USES=	php:pecl

.include <bsd.port.mk>
