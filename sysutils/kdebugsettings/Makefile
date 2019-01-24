# $FreeBSD: head/sysutils/kdebugsettings/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	kdebugsettings
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE application to enable/disable qCDebug

USES=		cmake compiler:c++11-lang gettext kde:5 qt:5 tar:xz
USE_KDE=	completion config configwidgets coreaddons dbusaddons \
		ecm guiaddons i18n iconthemes itemviews kio widgetsaddons
USE_QT=		core dbus gui testlib widgets \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
