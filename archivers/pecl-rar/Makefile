# Created by: Chin-San Huang <chinsan.tw@gmail.com>
# $FreeBSD: head/archivers/pecl-rar/Makefile 447078 2017-08-01 21:15:49Z joneum $

PORTNAME=	rar
PORTVERSION=	4.0.0
CATEGORIES=	archivers pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL extension to create and read RAR files

LICENSE=	PHP301

USES=		php:pecl
USE_PHP=	spl:build
IGNORE_WITH_PHP=	70 71

CONFIGURE_ARGS=	--enable-rar

.include <bsd.port.mk>
