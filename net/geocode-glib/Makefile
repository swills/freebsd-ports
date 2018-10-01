# Created by: Gustau Perez i Querol <gustau.perez@gmail.com>
# $FreeBSD: head/net/geocode-glib/Makefile 480951 2018-09-30 11:58:29Z kwm $

PORTNAME=	geocode-glib
PORTVERSION=	3.26.0
CATEGORIES=	net devel gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Convenience library for the geocoding and reverse geocoding

BUILD_DEPENDS=	gtkdoc-scan:textproc/gtk-doc
LIB_DEPENDS=	libjson-glib-1.0.so:devel/json-glib \
		libsoup-2.4.so:devel/libsoup

PORTSCOUT=	limitw:1,even

USES=		gettext gnome localbase meson pkgconfig tar:xz
USE_GNOME=	glib20 introspection:build
USE_LDCONFIG=	yes
MESON_ARGS=	-Denable-installed-tests=false
#MAKE_ENV=	XDG_CACHE_HOME=${WRKDIR}

.include <bsd.port.mk>
