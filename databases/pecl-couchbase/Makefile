# Created by: John Chen <johnpupu@gmail.com>
# $FreeBSD: head/databases/pecl-couchbase/Makefile 446171 2017-07-18 18:08:40Z sunpoet $

PORTNAME=	couchbase
PORTVERSION=	2.3.3
CATEGORIES=	databases

MAINTAINER=	johnpupu@gmail.com
COMMENT=	Couchbase Server PHP extension

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	libcouchbase>=2.7.5:databases/libcouchbase
LIB_DEPENDS=	libcouchbase.so:databases/libcouchbase

USE_PHP=	json:build
USES=		php:pecl

.include <bsd.port.mk>
