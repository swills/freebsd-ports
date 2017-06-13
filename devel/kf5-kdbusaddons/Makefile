# Created by: tcberner
# $FreeBSD: head/devel/kf5-kdbusaddons/Makefile 438880 2017-04-19 14:59:40Z tcberner $

PORTNAME=	kdbusaddons
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 addons to QtDBus

USES=		cmake:outsource compiler:c++11-lib kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core dbus gui linguisttools \
		qmake_build testlib x11extras

.include <bsd.port.mk>
