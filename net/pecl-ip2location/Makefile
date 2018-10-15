# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/net/pecl-ip2location/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	ip2location
PORTVERSION=	6.0.4
PORTREVISION=	1
CATEGORIES=	net pear

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Get geo location information of an IP address

LICENSE=	PHP301

LIB_DEPENDS=	libIP2Location.so:net/ip2location

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72 73

.include <bsd.port.mk>
