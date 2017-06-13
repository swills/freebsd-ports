# Created by: Chin-San Huang <chinsan.tw@gmail.com>
# $FreeBSD: head/archivers/pecl-rar/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	rar
PORTVERSION=	3.0.2
PORTREVISION=	1
CATEGORIES=	archivers pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL extension to create and read RAR files

LICENSE=	PHP301

USES=		php:pecl
USE_PHP=	spl:build
IGNORE_WITH_PHP=	70 71


CONFIGURE_ARGS=	--enable-rar

.include <bsd.port.mk>
