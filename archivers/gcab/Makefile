# Created by: kwm@FreeBSD.org
# $FreeBSD$

PORTNAME=	gcab
PORTVERSION=	1.0
CATEGORIES=	archivers gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GObject library to create cabinet files

BUILD_DEPENDS=	vala:lang/vala

USES=		cpe gettext meson pkgconfig tar:xz
USE_GNOME=	glib20 introspection:build
CPE_VENDOR=	gnome
MESON_ARGS=	-Dtests=false

OPTIONS_DEFINE=	GTKDOC
OPTIONS_SUB=	yes

GTKDOC_DESC=		Build API documentation (requires textproc/gtk-doc)
GTKDOC_BUILD_DEPENDS=	gtkdoc-scan:textproc/gtk-doc
GTKDOC_MESON_TRUE	=docs

.include <bsd.port.mk>
