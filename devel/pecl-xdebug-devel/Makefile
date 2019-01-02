# Created by: Luca Pizzamiglio <luca.pizzamiglio@trivago.com>
# $FreeBSD: head/devel/pecl-xdebug-devel/Makefile 488670 2018-12-29 15:16:31Z pizzamig $

PORTNAME=	xdebug
DISTVERSION=	2.7.0beta1
CATEGORIES=	devel pear
PKGNAMESUFFIX=	-devel

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Xdebug extension for PHP

LICENSE=	PHP30
LICENSE_FILE=	${WRKSRC}/LICENSE

IGNORE_WITH_PHP=	56 71

USES=		php:pecl,zend tar:tgz

CONFIGURE_ARGS=	--enable-xdebug

SUB_FILES=	pkg-message

.include <bsd.port.mk>
