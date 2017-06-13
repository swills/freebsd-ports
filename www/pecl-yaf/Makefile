# Created by: johnpupu <johnpupu@gmail.com>
# $FreeBSD: head/www/pecl-yaf/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	yaf
PORTVERSION=	3.0.4
CATEGORIES=	www

MAINTAINER=	johnpupu@gmail.com
COMMENT=	MVC framework written as a C PHP extension

LICENSE=	PHP301

LIB_DEPENDS=	libpcre.so:devel/pcre

CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ARGS=	--with-php-config=${PREFIX}/bin/php-config

USES=		php:pecl
IGNORE_WITH_PHP=56

.include <bsd.port.mk>
