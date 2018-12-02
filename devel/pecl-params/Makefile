# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: head/devel/pecl-params/Makefile 486473 2018-12-02 17:43:33Z antoine $

PORTNAME=	params
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL extension for a userspace equivalent of zend_parse_parameters()

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72 73

CONFIGURE_ARGS=	--enable-params

.include <bsd.port.mk>
