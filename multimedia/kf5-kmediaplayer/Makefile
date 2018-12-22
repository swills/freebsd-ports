# $FreeBSD: head/multimedia/kf5-kmediaplayer/Makefile 487595 2018-12-16 14:59:10Z tcberner $

PORTNAME=	kmediaplayer
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	multimedia kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 plugin interface for media player features

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		ecm i18n jobwidgets kio parts service sonnet textwidgets \
		widgetsaddons xmlgui
USE_QT=		buildtools_build core dbus gui network qmake_build \
		testlib widgets xml

.include <bsd.port.mk>
