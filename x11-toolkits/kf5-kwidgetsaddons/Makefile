# $FreeBSD: head/x11-toolkits/kf5-kwidgetsaddons/Makefile 454297 2017-11-16 05:59:35Z tcberner $

PORTNAME=	kwidgetsaddons
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 addons to QtWidgets

USES=		cmake:outsource compiler:c++11-lib kde:5 pkgconfig tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core gui linguisttools \
		qmake_build uiplugin uitools testlib widgets

.include <bsd.port.mk>
