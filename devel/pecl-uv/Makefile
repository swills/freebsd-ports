# Created by: John Chen <johnpupu@gmail.com>
# $FreeBSD: head/devel/pecl-uv/Makefile 481878 2018-10-12 06:23:47Z antoine $

PORTNAME=	uv
PORTVERSION=	0.2.2
CATEGORIES=	devel

MAINTAINER=	johnpupu@gmail.com
COMMENT=	PHP wrapper for libuv

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libuv.so:devel/libuv

IGNORE_WITH_PHP=	56 73
USES=		php:pecl

.include <bsd.port.mk>
