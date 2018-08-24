# $FreeBSD: head/x11-toolkits/kf5-kxmlgui/Makefile 477922 2018-08-23 18:49:16Z adridg $

PORTNAME=	kxmlgui
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 user configurable main windows

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	attica5 auth codecs config configwidgets coreaddons ecm \
		globalaccel i18n iconthemes itemviews sonnet textwidgets \
		widgetsaddons windowsystem
USE_QT=		buildtools_build core dbus gui network printsupport \
		qmake_build widgets xml

.include <bsd.port.mk>
