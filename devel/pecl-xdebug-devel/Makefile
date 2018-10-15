# Created by: Luca Pizzamiglio <luca.pizzamiglio@trivago.com>
# $FreeBSD: head/devel/pecl-xdebug-devel/Makefile 481639 2018-10-09 16:27:57Z pizzamig $

PORTNAME=	xdebug
DISTVERSION=	2.7.0beta1
CATEGORIES=	devel pear
PKGNAMESUFFIX=	-devel

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Xdebug extension for PHP

LICENSE=	PHP30
LICENSE_FILE=	${WRKSRC}/LICENSE

IGNORE_WITH_PHP=	56

USES=		php:pecl,zend tar:tgz

CONFIGURE_ARGS=	--enable-xdebug

SUB_FILES=	pkg-message

.include <bsd.port.mk>
