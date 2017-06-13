# Created by: wen
# $FreeBSD: head/databases/pecl-mongo/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	mongo
PORTVERSION=	1.6.14
PORTREVISION=	1
CATEGORIES=	databases pear

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	PECL classes for Mongo Database Driver

LICENSE=	APACHE20

BUILD_DEPENDS=	re2c>=0.13.4:devel/re2c

USES=		php:pecl
USE_PHP=	spl:build
CONFIGURE_ARGS=	--enable-mongo
SUB_FILES=	pkg-message
IGNORE_WITH_PHP=	70 71

.include <bsd.port.mk>
