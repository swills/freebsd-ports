# $FreeBSD: head/x11-toolkits/kf5-kjobwidgets/Makefile 477922 2018-08-23 18:49:16Z adridg $

PORTNAME=	kjobwidgets
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 widgets for tracking KJob instance

USES=		cmake:outsource compiler:c++11-lib kde:5 qt:5 tar:xz
USE_KDE=	coreaddons ecm widgetsaddons
USE_QT=		buildtools_build core dbus gui linguisttools \
		qmake_build widgets x11extras

.include <bsd.port.mk>
