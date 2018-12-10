# Created by: johnpupu <johnpupu@gmail.com>
# $FreeBSD: head/www/pecl-yaf2/Makefile 486751 2018-12-06 11:22:12Z rene $

PORTNAME=	yaf
PORTVERSION=	2.3.5
CATEGORIES=	www

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	MVC framework written as a C PHP extension

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

LICENSE=	PHP301

LIB_DEPENDS=	libpcre.so:devel/pcre

PORTSCOUT=	limit:^2\.

USES=		localbase php:pecl
IGNORE_WITH_PHP=71 72 73

.include <bsd.port.mk>
