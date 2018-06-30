# $FreeBSD: head/devel/kf5-kdbusaddons/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kdbusaddons
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 addons to QtDBus

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		cmake:outsource compiler:c++11-lib kde:5 qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		buildtools_build core dbus gui linguisttools \
		qmake_build testlib x11extras

.include <bsd.port.mk>
