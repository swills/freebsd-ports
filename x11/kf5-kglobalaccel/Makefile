# $FreeBSD: head/x11/kf5-kglobalaccel/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kglobalaccel
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library to add support for global workspace shortcuts

LIB_DEPENDS=	libxcb-keysyms.so:x11/xcb-util-keysyms

USES=		cmake:outsource compiler:c++11-lib kde:5 qt:5 tar:xz
USE_KDE=	ecm config coreaddons crash dbusaddons i18n service \
		windowsystem
USE_QT=		buildtools_build core dbus gui linguisttools qmake_build \
		testlib widgets x11extras
USE_XORG=	xcb

.include <bsd.port.mk>
