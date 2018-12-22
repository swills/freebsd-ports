# $FreeBSD: head/devel/template-glib/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	template-glib
PORTVERSION=	3.28.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Templating library for GLib

BUILD_DEPENDS=	valac:lang/vala

USES=		bison compiler:c11 gettext gnome meson pkgconfig tar:xz
USE_GNOME=	glib20 introspection

.include <bsd.port.mk>
