# Created by: Luca Pizzamiglio <luca.pizzamiglio@trivago.com>
# $FreeBSD: head/devel/pecl-xdebug/Makefile 481638 2018-10-09 16:23:46Z pizzamig $

PORTNAME=	xdebug
DISTVERSION=	2.6.1
CATEGORIES=	devel pear

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Xdebug extension for PHP

LICENSE=	PHP30
LICENSE_FILE=	${WRKSRC}/LICENSE

IGNORE_WITH_PHP=	56 73

CONFIGURE_ARGS=	--enable-xdebug
USES=		php:pecl,zend tar:tgz

SUB_FILES=	pkg-message

.include <bsd.port.mk>
