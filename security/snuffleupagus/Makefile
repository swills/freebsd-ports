# $FreeBSD: head/security/snuffleupagus/Makefile 489349 2019-01-05 15:47:56Z rene $

PORTNAME=	snuffleupagus
DISTVERSIONPREFIX=v
DISTVERSION=	0.4.1
CATEGORIES=	security
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	franco@opnsense.org
COMMENT=	Security module for PHP 7+

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/../LICENSE

LIB_DEPENDS=	libpcre.so:devel/pcre

TEST_TARGET=	test

WRKSRC_SUBDIR=	src

USES=		localbase:ldflags php:ext
USE_PHP=	hash:build session:build

USE_GITHUB=	yes
GH_ACCOUNT=	nbs-system

CONFIGURE_ARGS=	--enable-snuffleupagus

.include <bsd.port.mk>
