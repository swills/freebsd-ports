# $FreeBSD: head/devel/kf5-knotifyconfig/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	knotifyconfig
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 configuration system for KNotify

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	completion config coreaddons ecm i18n jobwidgets kio \
		service widgetsaddons
USE_QT=		buildtools_build core dbus gui network phonon4 \
		qmake_build widgets

.include <bsd.port.mk>
