# Created by: raven428 <raven428@gmail.com>
# $FreeBSD: head/devel/php5-pinba/Makefile 473276 2018-06-24 21:11:14Z sunpoet $

PORTNAME=	pinba
PORTVERSION=	2012.03.20
PORTREVISION=	10
CATEGORIES=	devel
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	komarov@valerka.net
COMMENT=	PHP-extension part of statistics server for PHP

LIB_DEPENDS=	libprotobuf.so:devel/protobuf

BROKEN_powerpc64=	fails to compile: class 'google::protobuf::internal::InternalMetadataWithArenaLite' does not have any field named 'InternalMetadataWithArenaBase'

USE_GITHUB=	yes
GH_ACCOUNT=	tony2001
GH_PROJECT=	pinba_extension
GH_TAGNAME=	f76b673

USES=		php:ext
IGNORE_WITH_PHP=	70 71 72

.include <bsd.port.mk>
