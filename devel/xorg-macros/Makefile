# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/devel/xorg-macros/Makefile 451305 2017-10-05 12:25:10Z bapt $

PORTNAME=	xorg-macros
PORTVERSION=	1.19.1
CATEGORIES=	devel x11
DISTNAME=	util-macros-${PORTVERSION}

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org development aclocal macros

LICENSE=	MIT

XORG_CAT=	util

MAKE_ARGS=	pkgconfigdir="${PREFIX}/libdata/pkgconfig"

PLIST_FILES=	share/aclocal/xorg-macros.m4 \
		libdata/pkgconfig/xorg-macros.pc \
		share/util-macros/INSTALL

.include <bsd.port.mk>
