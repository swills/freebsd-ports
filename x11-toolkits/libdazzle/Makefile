# $FreeBSD: head/x11-toolkits/libdazzle/Makefile 485728 2018-11-24 07:20:56Z linimon $

PORTNAME=	libdazzle
PORTVERSION=	3.28.5
CATEGORIES=	x11-toolkits
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Staging and stabilizing for facy Glib and Gtk+ features

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	valac:lang/vala

USES=		compiler:c11 gnome meson pkgconfig tar:xz
USE_GNOME=	cairo gdkpixbuf2 gtk30 introspection:build

.include <bsd.port.mk>
