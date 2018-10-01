# Created by: kwm@FreeBSD.org
# $FreeBSD: head/archivers/gcab/Makefile 480951 2018-09-30 11:58:29Z kwm $

PORTNAME=	gcab
PORTVERSION=	1.0
CATEGORIES=	archivers gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GObject library to create cabinet files

BUILD_DEPENDS=	vala:lang/vala \
		gtkdoc-scan:textproc/gtk-doc

USES=		cpe gettext meson pkgconfig tar:xz
USE_GNOME=	glib20 introspection:build
CPE_VENDOR=	gnome

.include <bsd.port.mk>
