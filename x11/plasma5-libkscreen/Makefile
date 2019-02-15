# $FreeBSD: head/x11/plasma5-libkscreen/Makefile 492811 2019-02-12 21:40:13Z tcberner $

PORTNAME=	libkscreen
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 screen management library

USES=		cmake compiler:c++11-lib cpe kde:5 pathfix \
		pkgconfig qt:5 tar:xz
USE_KDE=	ecm wayland
USE_QT=		core dbus gui testlib x11extras \
		buildtools_build qmake_build
USE_XORG=	x11 xcb xrandr

.include <bsd.port.mk>
