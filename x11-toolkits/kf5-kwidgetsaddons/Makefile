# $FreeBSD: head/x11-toolkits/kf5-kwidgetsaddons/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kwidgetsaddons
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 addons to QtWidgets

USES=		cmake:outsource compiler:c++11-lib kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		buildtools_build core gui linguisttools \
		qmake_build uiplugin uitools testlib widgets

.include <bsd.port.mk>
