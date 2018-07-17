# $FreeBSD: head/games/blinken/Makefile 474596 2018-07-13 17:41:56Z tcberner $

PORTNAME=	blinken
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Memory enhancement game for KDE

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons crash dbusaddons \
		doctools ecm guiaddons i18n widgetsaddons xmlgui
USE_QT=		core dbus gui phonon4 svg widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
