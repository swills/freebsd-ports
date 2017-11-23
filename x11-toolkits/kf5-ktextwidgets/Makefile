# $FreeBSD: head/x11-toolkits/kf5-ktextwidgets/Makefile 454297 2017-11-16 05:59:35Z tcberner $

PORTNAME=	ktextwidgets
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 advanced text editing widgets

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets \
		coreaddons dbusaddons ecm guiaddons i18n \
		iconthemes itemviews service sonnet \
		widgetsaddons windowsystem
USE_QT5=	buildtools_build core dbus gui qmake_build widgets xml

.include <bsd.port.mk>
