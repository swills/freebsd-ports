# $FreeBSD: head/net-im/kaccounts-integration/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kaccounts-integration
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	System to administer web accounts for the KDE desktop

LIB_DEPENDS=	libaccounts-glib.so:net-im/libaccounts-glib \
		libaccounts-qt5.so:net-im/libaccounts-qt5 \
		liboauth2plugin.so:sysutils/signon-plugin-oauth2 \
		libsignon-qt5.so:sysutils/signon-qt5 \
		libkeyring-kwallet.so:sysutils/signon-kwallet-extension
RUN_DEPENDS=	signon-ui:sysutils/signon-ui

USES=		cmake:outsource gettext pkgconfig kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons dbusaddons ecm \
		i18n iconthemes kcmutils kio service wallet widgetsaddons \
		akonadi
USE_QT=		dbus core gui network qml widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
