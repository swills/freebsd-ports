# $FreeBSD: head/devel/kf5-knewstuff/Makefile 487595 2018-12-16 14:59:10Z tcberner $

PORTNAME=	knewstuff
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library for downloading application assets from the network

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	archive attica5 auth codecs completion config \
		configwidgets coreaddons ecm i18n iconthemes itemviews \
		jobwidgets kio service sonnet textwidgets widgetsaddons \
		xmlgui
USE_QT=		buildtools_build core dbus declarative gui network qmake_build \
		widgets xml

.include <bsd.port.mk>
