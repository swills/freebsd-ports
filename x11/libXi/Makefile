# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libXi/Makefile 479538 2018-09-11 18:34:27Z zeising $

PORTNAME=	libXi
PORTVERSION=	1.7.9
PORTREVISION=	2
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Input extension library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	x11 xext xfixes xorgproto
INSTALL_TARGET=	install-strip
USES+=	cpe
CPE_PRODUCT=	libxi
CPE_VENDOR=	x

CONFIGURE_ARGS+=--disable-docs \
		--disable-specs \
		--without-xmlto \
		--without-fop \
		--without-asciidoc \
		--without-xsltproc

.include <bsd.port.mk>
