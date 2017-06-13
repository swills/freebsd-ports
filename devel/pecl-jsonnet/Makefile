# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pecl-jsonnet/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	jsonnet
PORTVERSION=	1.1.1
CATEGORIES=	devel
DISTNAME=	JsonNet-${PORTVERSION}

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Google JsonNet for PHP

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libjsonnet.so:devel/jsonnet

USES=		php:pecl
USE_PHP=	json:build
CONFIGURE_ARGS=	--with-jsonnet=${LOCALBASE}
IGNORE_WITH_PHP=	70

.include <bsd.port.mk>
