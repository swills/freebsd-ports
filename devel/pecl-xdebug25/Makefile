# Created by: Jens Rehsack <rehsack@liwing.de>
# $FreeBSD: head/devel/pecl-xdebug25/Makefile 493499 2019-02-21 11:59:49Z pizzamig $

PORTNAME=	xdebug
PORTVERSION=	2.5.5
PORTREVISION=	1
CATEGORIES=	devel pear
PKGNAMESUFFIX=	25

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Xdebug extension for PHP

LICENSE=	PHP30
LICENSE_FILE=	${WRKSRC}/LICENSE

IGNORE_WITH_PHP=	72 73

USES=		php:pecl,zend

CONFIGURE_ARGS=	--enable-xdebug

SUB_FILES=	pkg-message

PORTSCOUT=	limit=^2\.5\.

.include <bsd.port.mk>
