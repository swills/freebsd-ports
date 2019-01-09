# Created by: johnpupu <johnpupu@gmail.com>
# $FreeBSD: head/www/pecl-yaf/Makefile 489318 2019-01-05 10:14:45Z joneum $

PORTNAME=	yaf
DISTVERSION=	3.0.7
CATEGORIES=	www

MAINTAINER=	joneum@freeBSD.org
COMMENT=	MVC framework written as a C PHP extension

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

IGNORE_WITH_PHP=	73

LIB_DEPENDS=	libpcre.so:devel/pcre

CONFIGURE_ARGS=	--with-php-config=${LOCALBASE}/bin/php-config
USES=		localbase php:pecl

.include <bsd.port.mk>
