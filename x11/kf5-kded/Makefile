# $FreeBSD: head/x11/kf5-kded/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	kded
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 extensible deamon for providing system level services

USES=		cmake compiler:c++11-lib kde:5 qt:5 tar:xz
USE_KDE=	config coreaddons crash dbusaddons doctools ecm \
		init service
USE_QT=		buildtools_build core dbus gui qmake_build widgets

.include <bsd.port.mk>
