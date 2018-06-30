# $FreeBSD: head/x11-themes/plasma5-breeze-gtk/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	breeze-gtk
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11-themes kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 Breeze visual style for Gtk

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		cmake:outsource cpe kde:5 pkgconfig qt:5 tar:xz
USE_GNOME=	gdkpixbuf2
USE_KDE=	ecm
USE_QT=		core buildtools_build qmake_build

.include <bsd.port.mk>
