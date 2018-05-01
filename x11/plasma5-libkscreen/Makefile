# $FreeBSD: head/x11/plasma5-libkscreen/Makefile 468495 2018-04-27 20:29:36Z tcberner $

PORTNAME=	libkscreen
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 screen management library

USES=		cmake:outsource compiler:c++11-lib cpe kde:5 pathfix \
		pkgconfig tar:xz
USE_KDE=	ecm wayland
USE_QT5=	core dbus gui testlib x11extras \
		buildtools_build qmake_build
USE_XORG=	x11 xcb xrandr

.include <bsd.port.mk>
