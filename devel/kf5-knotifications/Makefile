# $FreeBSD: head/devel/kf5-knotifications/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	knotifications
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 abstraction for system notifications

LIB_DEPENDS=	libdbusmenu-qt5.so:devel/libdbusmenu-qt@qt5

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	codecs config coreaddons ecm windowsystem
USE_QT=		buildtools_build core dbus gui linguisttools phonon4 \
		qmake_build widgets x11extras
USE_XORG=	x11

.include <bsd.port.mk>
