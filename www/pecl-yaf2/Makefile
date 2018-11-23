# Created by: johnpupu <johnpupu@gmail.com>
# $FreeBSD: head/www/pecl-yaf2/Makefile 485511 2018-11-21 12:41:57Z joneum $

PORTNAME=	yaf
PORTVERSION=	2.3.5
CATEGORIES=	www

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	MVC framework written as a C PHP extension

LICENSE=	PHP301

LIB_DEPENDS=	libpcre.so:devel/pcre

PORTSCOUT=	limit:^2\.

USES=		localbase php:pecl
IGNORE_WITH_PHP=70 71 72 73

.include <bsd.port.mk>
