# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: head/archivers/pecl-phk/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	phk
PORTVERSION=	3.0.1
PORTREVISION=	1
CATEGORIES=	archivers pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHK is a PHP-oriented package/archive system

LICENSE=	PHP301

USES=		php:pecl
USE_PHP=	hash:build
IGNORE_WITH_PHP=	70 71 72 73

CONFIGURE_ARGS=	--enable-phk

.include <bsd.port.mk>
