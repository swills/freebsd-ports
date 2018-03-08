# $FreeBSD: head/japanese/php5-mecab/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	mecab
PORTVERSION=	0.5.0
PORTREVISION=	1
CATEGORIES=	japanese
MASTER_SITES=	https://github.com/downloads/rsky/php-${PORTNAME}/
DISTNAME=	php-mecab-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	PHP5 extension for MeCab Morphological Analyzer

LIB_DEPENDS=	libmecab.so:japanese/mecab

USES=		php:ext
IGNORE_WITH_PHP=	70 71 72
CONFIGURE_ARGS=	--with-mecab=${LOCALBASE}/bin/mecab-config

.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}${PHP_PKGNAMEPREFIX}

.include <bsd.port.post.mk>
