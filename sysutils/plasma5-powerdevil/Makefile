# $FreeBSD: head/sysutils/plasma5-powerdevil/Makefile 475857 2018-07-29 22:18:44Z gerald $

PORTNAME=	powerdevil
DISTVERSION=	${KDE_PLASMA_VERSION}
PORTREVISION=	1
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 tool to manage the power consumption settings

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	activities auth bookmarks codecs completion configwidgets \
		coreaddons crash config dbusaddons ecm emoticons globalaccel \
		guiaddons i18n idletime iconthemes init itemmodels itemviews \
		jobwidgets kdelibs4support kio libkscreen notifications \
		notifyconfig parts plasma-workspace service solid sonnet \
		textwidgets unitconversion wayland widgetsaddons windowsystem \
		xmlgui
USE_QT=		core dbus gui network printsupport widgets x11extras xml \
		buildtools_build qmake_build
USE_XORG=	xcb

.include <bsd.port.mk>
