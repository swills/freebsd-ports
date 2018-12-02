# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/net/pecl-mosquitto/Makefile 486473 2018-12-02 17:43:33Z antoine $

PORTNAME=	mosquitto
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	net pear
DISTNAME=	Mosquitto-${PORTVERSION}

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Extension for libmosquitto

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	mosquitto>=0:net/mosquitto

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72 73

.include <bsd.port.mk>
