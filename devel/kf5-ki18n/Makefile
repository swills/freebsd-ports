# $FreeBSD: head/devel/kf5-ki18n/Makefile 487595 2018-12-16 14:59:10Z tcberner $

PORTNAME=	ki18n
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 advanced internationalization framework

USES=		cmake:outsource compiler:c++11-lib gettext-runtime \
		gettext-tools:build,run kde:5 qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		buildtools_build concurrent core declarative qmake_build script testlib

.include <bsd.port.mk>
