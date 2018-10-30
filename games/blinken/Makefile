# $FreeBSD: head/games/blinken/Makefile 483125 2018-10-27 11:50:58Z tcberner $

PORTNAME=	blinken
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Memory enhancement game for KDE

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons crash dbusaddons \
		doctools ecm guiaddons i18n widgetsaddons xmlgui
USE_QT=		core dbus gui phonon4 svg widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
