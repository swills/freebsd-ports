# $FreeBSD: head/sysutils/kdebugsettings/Makefile 466902 2018-04-09 19:58:12Z tcberner $

PORTNAME=	kdebugsettings
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE application to enable/disable qCDebug

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	completion config configwidgets coreaddons dbusaddons \
		ecm guiaddons i18n iconthemes itemviews kio widgetsaddons
USE_QT5=	core dbus gui testlib widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
