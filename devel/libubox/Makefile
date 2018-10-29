# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/devel/libubox/Makefile 482806 2018-10-23 00:28:14Z mm $

PORTNAME=	libubox
PORTVERSION=	20180803
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	mm@FreeBSD.org
COMMENT=	C utility functions for OpenWrt

LICENSE=	GPLv2

LIB_DEPENDS=	libjson-c.so:devel/json-c

USES=		cmake pkgconfig lua:51
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	mmatuska
GH_TAGNAME=	c83a84af

CMAKE_ARGS+=	-DLUAPATH="${LUA_MODLIBDIR}"

.include <bsd.port.mk>
