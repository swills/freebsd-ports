# Created by: Jens Rehsack <rehsack@liwing.de>
# $FreeBSD: head/devel/pecl-xdebug/Makefile 460391 2018-01-30 15:15:53Z pizzamig $

PORTNAME=	xdebug
PORTVERSION=	2.5.5
CATEGORIES=	devel pear

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Xdebug extension for PHP

LICENSE=	PHP30
LICENSE_FILE=	${WRKSRC}/LICENSE

IGNORE_WITH_PHP=	72

CONFIGURE_ARGS=	--enable-xdebug
USES=		php:pecl

SUB_FILES=	pkg-message

.include <bsd.port.mk>
