# Created by: tcberner
# $FreeBSD: head/devel/kf5-kconfig/Makefile 450056 2017-09-18 17:42:44Z tcberner $

PORTNAME=	kconfig
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 widgets for configuration dialogs

USES=		cmake:outsource compiler:c++11-lib kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build concurrent core gui linguisttools \
		qmake_build testlib xml

.include <bsd.port.mk>
