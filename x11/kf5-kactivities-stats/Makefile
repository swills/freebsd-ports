# $FreeBSD: head/x11/kf5-kactivities-stats/Makefile 477922 2018-08-23 18:49:16Z adridg $

PORTNAME=	kactivities-stats
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 statistics for activities

LIB_DEPENDS=	libboost_system.so:devel/boost-libs
RUN_DEPENDS=	kactivitymanagerd:x11/plasma5-kactivitymanagerd

USES=		cmake:outsource compiler:c++11-lib kde:5 pathfix qt:5 tar:xz
USE_KDE=	activities config ecm
USE_QT=		buildtools_build core dbus qmake_build sql

.include <bsd.port.mk>
