# Created by: Hung-Yi Chen <gaod@hychen.org>
# $FreeBSD: head/www/pecl-solr/Makefile 481878 2018-10-12 06:23:47Z antoine $

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
IGNORE_WITH_PHP=	72 73

.include <bsd.port.mk>
