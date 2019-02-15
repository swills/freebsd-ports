# $FreeBSD: head/x11/kf5-kactivities-stats/Makefile 492811 2019-02-12 21:40:13Z tcberner $

PORTNAME=	kactivities-stats
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 statistics for activities

LIB_DEPENDS=	libboost_system.so:devel/boost-libs

USES=		cmake compiler:c++11-lib kde:5 pathfix qt:5 tar:xz
USE_KDE=	activities config ecm \
		activitymanagerd_run
USE_QT=		buildtools_build core dbus qmake_build sql

.include <bsd.port.mk>
