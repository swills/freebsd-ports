# $FreeBSD: head/x11/plasma5-libkscreen/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	libkscreen
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 screen management library

USES=		cmake:outsource compiler:c++11-lib cpe kde:5 pathfix \
		pkgconfig qt:5 tar:xz
USE_KDE=	ecm wayland
USE_QT=		core dbus gui testlib x11extras \
		buildtools_build qmake_build
USE_XORG=	x11 xcb xrandr

.include <bsd.port.mk>
