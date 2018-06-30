# $FreeBSD: head/net-im/ktp-kded-module/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	ktp-kded-module
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Module for integration of instant messaging into KDE Workspaces

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	activities auth codecs completion config configwidgets coreaddons \
		dbusaddons i18n idletime jobwidgets kcmutils kio notifications \
		service wallet widgetsaddons
USE_QT=		concurrent core dbus gui network sql widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
