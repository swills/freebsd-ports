# $FreeBSD: head/x11/kf5-kactivities-stats/Makefile 468495 2018-04-27 20:29:36Z tcberner $

PORTNAME=	kactivities-stats
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 statistics for activities

LIB_DEPENDS=	libboost_system.so:devel/boost-libs
RUN_DEPENDS=	kactivitymanagerd:x11/plasma5-kactivitymanagerd

USES=		cmake:outsource compiler:c++11-lib kde:5 pathfix tar:xz
USE_KDE=	activities config ecm
USE_QT5=	buildtools_build core dbus qmake_build sql

.include <bsd.port.mk>
