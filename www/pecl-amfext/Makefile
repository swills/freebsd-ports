# Created by: Piotr Rybicki <meritus@innervision.pl>
# $FreeBSD: head/www/pecl-amfext/Makefile 486473 2018-12-02 17:43:33Z antoine $

PORTNAME=	amfext
PORTVERSION=	0.9.2
PORTREVISION=	2
CATEGORIES=	www

MAINTAINER=	meritus@innervision.pl
COMMENT=	Implements encoding and decoding of AMF and AMF3 messages

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

LICENSE=	PHP30

USES=		dos2unix libtool php:pecl
PHP_MODNAME=	amf
IGNORE_WITH_PHP=	70 71 72 73

CONFIGURE_ARGS=	--with-amf

CPPFLAGS+=	-I${LOCALBASE}/include/php/ext/standard
CFLAGS+=	-Wno-deprecated

.include <bsd.port.mk>
