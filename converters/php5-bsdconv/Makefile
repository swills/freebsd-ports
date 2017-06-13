# Created by: buganini@gmail.com
# $FreeBSD: head/converters/php5-bsdconv/Makefile 433543 2017-02-07 12:14:34Z mat $

PORTNAME=	bsdconv
PORTVERSION=	11.3.0
PORTREVISION=	1
CATEGORIES=	converters
PKGNAMEPREFIX=	php5-

MAINTAINER=	buganini@gmail.com
COMMENT=	PHP wrapper for bsdconv

LICENSE=	ISCL

LIB_DEPENDS=	libbsdconv.so:converters/bsdconv

USE_GITHUB=	yes
GH_ACCOUNT=	buganini
GH_PROJECT=	php-${PORTNAME}

USES=		php:ext
IGNORE_WITH_PHP=	70 71
CONFIGURE_ARGS=	--with-bsdconv=${LOCALBASE}

.include <bsd.port.mk>
