# $FreeBSD: head/x11-themes/gtk-oxygen-engine/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	oxygen
PORTVERSION=	1.4.6
PORTREVISION=	1
CATEGORIES=	x11-themes
MASTER_SITES=	KDE/stable/${PORTNAME}-gtk2/${PORTVERSION}/src
PKGNAMEPREFIX=	gtk-
PKGNAMESUFFIX=	-engine
DISTNAME=	${PORTNAME}-gtk2-${PORTVERSION}

MAINTAINER=	rakuco@FreeBSD.org
COMMENT=	Oxygen-Gtk engine and theme

LICENSE=	LGPL21

LIB_DEPENDS=	libcairo.so:graphics/cairo \
		libdbus-glib-1.so:devel/dbus-glib

USE_GNOME=	gtk20
USES=		cmake pkgconfig tar:bzip2

.include <bsd.port.mk>
