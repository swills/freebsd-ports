# Created by: tcberner
# $FreeBSD: head/devel/kf5-kdbusaddons/Makefile 452819 2017-10-24 21:30:29Z adridg $

PORTNAME=	kdbusaddons
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 addons to QtDBus

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		cmake:outsource compiler:c++11-lib kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core dbus gui linguisttools \
		qmake_build testlib x11extras

.include <bsd.port.mk>
