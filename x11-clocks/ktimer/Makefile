# $FreeBSD: head/x11-clocks/ktimer/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	ktimer
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11-clocks kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Countdown launcher for KDE

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		dbusaddons doctools ecm i18n iconthemes jobwidgets kio \
		notifications service widgetsaddons xmlgui
USE_QT=		core dbus gui network widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
