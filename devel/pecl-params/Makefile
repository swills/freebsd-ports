# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: head/devel/pecl-params/Makefile 486751 2018-12-06 11:22:12Z rene $

PORTNAME=	params
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL extension for a userspace equivalent of zend_parse_parameters()

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

USES=		php:pecl
IGNORE_WITH_PHP=	71 72 73

CONFIGURE_ARGS=	--enable-params

.include <bsd.port.mk>
