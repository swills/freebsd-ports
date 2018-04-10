# $FreeBSD: head/games/kiriki/Makefile 466814 2018-04-08 18:09:23Z tcberner $

PORTNAME=	kiriki
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons crash dbusaddons \
		ecm guiaddons i18n iconthemes kio libkdegames widgetsaddons xmlgui
USE_QT5=	core dbus gui network printsupport qml quick svg widgets xml \
		buildtools_build qmake_build

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
