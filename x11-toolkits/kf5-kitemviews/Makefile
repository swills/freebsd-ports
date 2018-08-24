# $FreeBSD: head/x11-toolkits/kf5-kitemviews/Makefile 477922 2018-08-23 18:49:16Z adridg $

PORTNAME=	kitemviews
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 widget addons for Qt Model/View

USES=		cmake:outsource compiler:c++11-lib kde:5 qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		buildtools_build core gui linguisttools qmake_build \
		testlib widgets

.include <bsd.port.mk>
