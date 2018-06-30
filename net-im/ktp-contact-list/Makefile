# $FreeBSD: head/net-im/ktp-contact-list/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	ktp-contact-list
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging contact list application

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libtelepathy-logger-qt.so:net-im/telepathy-logger-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		dbusaddons ecm i18n iconthemes jobwidgets kcmutils kio \
		notifications notifyconfig people service wallet widgetsaddons \
		windowsystem xmlgui
USE_QT=		core dbus gui network widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
