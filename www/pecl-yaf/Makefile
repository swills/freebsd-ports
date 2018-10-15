# Created by: johnpupu <johnpupu@gmail.com>
# $FreeBSD: head/www/pecl-yaf/Makefile 481878 2018-10-12 06:23:47Z antoine $

PORTNAME=	yaf
DISTVERSION=	3.0.6
CATEGORIES=	www

MAINTAINER=	johnpupu@gmail.com
COMMENT=	MVC framework written as a C PHP extension

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

IGNORE_WITH_PHP=56 73

LIB_DEPENDS=	libpcre.so:devel/pcre

CONFIGURE_ARGS=	--with-php-config=${LOCALBASE}/bin/php-config
USES=		localbase php:pecl

.include <bsd.port.mk>
