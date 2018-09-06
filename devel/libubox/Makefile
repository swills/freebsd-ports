# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/devel/libubox/Makefile 479045 2018-09-05 22:01:55Z sunpoet $

PORTNAME=	libubox
PORTVERSION=	20180803
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	mm@FreeBSD.org
COMMENT=	C utility functions for OpenWrt

LICENSE=	GPLv2

LIB_DEPENDS=	libjson-c.so:devel/json-c

USES=		cmake pkgconfig lua:51
USE_GITHUB=	yes
GH_ACCOUNT=	mmatuska
GH_TAGNAME=	c83a84af

CMAKE_ARGS+=	-DLUAPATH="${LUA_MODLIBDIR}"

.include <bsd.port.mk>
