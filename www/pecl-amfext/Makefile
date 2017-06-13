# Created by: Piotr Rybicki <meritus@innervision.pl>
# $FreeBSD: head/www/pecl-amfext/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	amfext
PORTVERSION=	0.9.2
PORTREVISION=	2
CATEGORIES=	www

MAINTAINER=	meritus@innervision.pl
COMMENT=	Implements encoding and decoding of AMF and AMF3 messages

LICENSE=	PHP30

USES=		dos2unix libtool php:pecl
PHP_MODNAME=	amf
IGNORE_WITH_PHP=	70

CONFIGURE_ARGS=	--with-amf

CPPFLAGS+=	-I${LOCALBASE}/include/php/ext/standard
CFLAGS+=	-Wno-deprecated

.include <bsd.port.mk>
