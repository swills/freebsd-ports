# $FreeBSD: head/x11-toolkits/libdazzle/Makefile 488394 2018-12-26 14:54:38Z amdmi3 $

PORTNAME=	libdazzle
PORTVERSION=	3.28.5
PORTREVISION=	1
CATEGORIES=	x11-toolkits
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Companion library to GObject and Gtk+

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	valac:lang/vala

USES=		compiler:c11 gnome meson pkgconfig tar:xz
USE_GNOME=	cairo gdkpixbuf2 gtk30 introspection:build

.include <bsd.port.mk>
