# Created by: johnpupu <johnpupu@gmail.com>
# $FreeBSD: head/www/pecl-yaf2/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	yaf
PORTVERSION=	2.3.5
CATEGORIES=	www

MAINTAINER=	johnpupu@gmail.com
COMMENT=	MVC framework written as a C PHP extension

LICENSE=	PHP301

LIB_DEPENDS=	libpcre.so:devel/pcre

PORTSCOUT=	limit:^2\.

USES=		localbase php:pecl
IGNORE_WITH_PHP=70 71 72

.include <bsd.port.mk>
