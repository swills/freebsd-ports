# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/net/pecl-ip2location/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	ip2location
PORTVERSION=	6.0.4
PORTREVISION=	1
CATEGORIES=	net pear

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Get geo location information of an IP address

LICENSE=	PHP301

LIB_DEPENDS=	libIP2Location.so:net/ip2location

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72

.include <bsd.port.mk>
