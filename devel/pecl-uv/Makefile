# Created by: John Chen <johnpupu@gmail.com>
# $FreeBSD: head/devel/pecl-uv/Makefile 485511 2018-11-21 12:41:57Z joneum $

PORTNAME=	uv
PORTVERSION=	0.2.2
CATEGORIES=	devel

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHP wrapper for libuv

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libuv.so:devel/libuv

IGNORE_WITH_PHP=	56 73
USES=		php:pecl

.include <bsd.port.mk>
