# Created by: buganini@gmail.com
# $FreeBSD: head/converters/php-bsdconv/Makefile 466304 2018-04-03 09:48:25Z sunpoet $

PORTNAME=	bsdconv
PORTVERSION=	11.5.0
CATEGORIES=	converters
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	buganini@gmail.com
COMMENT=	PHP wrapper for bsdconv

LICENSE=	ISCL

LIB_DEPENDS=	libbsdconv.so:converters/bsdconv

USE_GITHUB=	yes
GH_ACCOUNT=	buganini
GH_PROJECT=	php-${PORTNAME}

USES=		php:ext
CONFIGURE_ARGS=	--with-bsdconv=${LOCALBASE}

.include <bsd.port.mk>
