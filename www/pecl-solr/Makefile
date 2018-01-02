# Created by: Hung-Yi Chen <gaod@hychen.org>
# $FreeBSD: head/www/pecl-solr/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	solr
PORTVERSION=	2.4.0
CATEGORIES=	www

MAINTAINER=	gaod@hychen.org
COMMENT=	PHP extension for Apache Solr

LICENSE=	PHP301

LIB_DEPENDS=	libcurl.so:ftp/curl \
		libxml2.so:textproc/libxml2

USES=		php:pecl
USE_PHP=	json:build
IGNORE_WITH_PHP=	72

.include <bsd.port.mk>
