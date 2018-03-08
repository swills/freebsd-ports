# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/textproc/php-mecab/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	mecab
PORTVERSION=	0.6.0
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	PHP bindings of the MeCab

LICENSE=	MIT

LIB_DEPENDS=	libmecab.so:japanese/mecab

USE_GITHUB=	yes
GH_ACCOUNT=	rsky
GH_PROJECT=	php-${PORTNAME}

WRKSRC_SUBDIR=	mecab
CONFIGURE_ARGS=	--with-mecab=${LOCALBASE}/bin/mecab-config
USES=		php:ext

.include <bsd.port.mk>
