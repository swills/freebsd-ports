# Created by: Luca Pizzamiglio <luca.pizzamiglio@trivago.com>
# $FreeBSD: head/devel/pecl-xdebug/Makefile 489349 2019-01-05 15:47:56Z rene $

PORTNAME=	xdebug
DISTVERSION=	2.6.1
CATEGORIES=	devel pear

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Xdebug extension for PHP

LICENSE=	PHP30
LICENSE_FILE=	${WRKSRC}/LICENSE

IGNORE_WITH_PHP=	73

CONFIGURE_ARGS=	--enable-xdebug
USES=		php:pecl,zend tar:tgz

SUB_FILES=	pkg-message

.include <bsd.port.mk>
