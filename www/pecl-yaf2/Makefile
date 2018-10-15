# Created by: johnpupu <johnpupu@gmail.com>
# $FreeBSD: head/www/pecl-yaf2/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	yaf
PORTVERSION=	2.3.5
CATEGORIES=	www

MAINTAINER=	johnpupu@gmail.com
COMMENT=	MVC framework written as a C PHP extension

LICENSE=	PHP301

LIB_DEPENDS=	libpcre.so:devel/pcre

PORTSCOUT=	limit:^2\.

USES=		localbase php:pecl
IGNORE_WITH_PHP=70 71 72 73

.include <bsd.port.mk>
