# Created by: Luca Pizzamiglio <luca.pizzamiglio@trivago.com>
# $FreeBSD: head/devel/pecl-xdebug26/Makefile 465006 2018-03-19 10:27:56Z pizzamig $

PORTNAME=	xdebug
DISTVERSION=	2.6.0
CATEGORIES=	devel pear
PKGNAMESUFFIX=	26

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Xdebug extension for PHP

LICENSE=	PHP30
LICENSE_FILE=	${WRKSRC}/LICENSE

IGNORE_WITH_PHP=	56

CONFIGURE_ARGS=	--enable-xdebug
USES=		php:pecl,zend tar:tgz

SUB_FILES=	pkg-message

.include <bsd.port.mk>
