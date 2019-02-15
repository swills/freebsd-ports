# $FreeBSD: head/devel/kf5-knotifyconfig/Makefile 492794 2019-02-12 17:48:25Z tcberner $

PORTNAME=	knotifyconfig
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 configuration system for KNotify

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	completion config coreaddons ecm i18n jobwidgets kio \
		service widgetsaddons
USE_QT=		buildtools_build core dbus gui network phonon4 \
		qmake_build widgets

.include <bsd.port.mk>
