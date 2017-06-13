# Created by: tcberner
# $FreeBSD: head/devel/kf5-knotifyconfig/Makefile 438880 2017-04-19 14:59:40Z tcberner $

PORTNAME=	knotifyconfig
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 configuration system for KNotify

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	completion config coreaddons ecm i18n jobwidgets kio \
		service widgetsaddons
USE_QT5=	buildtools_build core dbus gui network phonon4 \
		qmake_build widgets

.include <bsd.port.mk>
