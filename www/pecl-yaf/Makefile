# Created by: johnpupu <johnpupu@gmail.com>
# $FreeBSD: head/www/pecl-yaf/Makefile 487194 2018-12-10 17:32:15Z joneum $

PORTNAME=	yaf
DISTVERSION=	3.0.7
CATEGORIES=	www

MAINTAINER=	joneum@freeBSD.org
COMMENT=	MVC framework written as a C PHP extension

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

IGNORE_WITH_PHP=56 73

LIB_DEPENDS=	libpcre.so:devel/pcre

CONFIGURE_ARGS=	--with-php-config=${LOCALBASE}/bin/php-config
USES=		localbase php:pecl

.include <bsd.port.mk>
