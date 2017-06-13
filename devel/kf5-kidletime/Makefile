# Created by: tcberner
# $FreeBSD: head/devel/kf5-kidletime/Makefile 438880 2017-04-19 14:59:40Z tcberner $

PORTNAME=	kidletime
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library for monitoring user activity

USES=		cmake:outsource compiler:c++11-lib kde:5 pkgconfig tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core dbus gui qmake_build widgets x11extras
USE_XORG=	ice sm x11 xext xcb xscrnsaver

.include <bsd.port.mk>
