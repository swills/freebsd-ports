# Created by: chinsan
# $FreeBSD: head/www/pecl-swish/Makefile 486473 2018-12-02 17:43:33Z antoine $

PORTNAME=	swish
PORTVERSION=	0.5.0
PORTREVISION=	1
CATEGORIES=	www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Swish-e bindings for PHP

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

LICENSE=	PHP301

BUILD_DEPENDS=	swish-config:www/swish-e
RUN_DEPENDS:=	swish-config:www/swish-e

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72 73

CONFIGURE_ARGS=	--enable-swish --with-swish=${LOCALBASE}/bin

.include <bsd.port.mk>
