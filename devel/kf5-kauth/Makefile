# Created by: tcberner
# $FreeBSD: head/devel/kf5-kauth/Makefile 441306 2017-05-20 10:24:35Z tcberner $

PORTNAME=	kauth
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 abstraction to system policy and authentication features

LIB_DEPENDS=	libpolkit-qt5-core-1.so:sysutils/polkit-qt5

USES=		cmake:outsource compiler:c++11-lib kde:5 tar:xz
USE_KDE=	coreaddons ecm
USE_QT5=	buildtools_build core dbus gui linguisttools qmake_build \
		widgets

.include <bsd.port.mk>
