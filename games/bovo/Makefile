# $FreeBSD: head/games/bovo/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	bovo
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons crash dbusaddons \
		ecm i18n kdeclarative libkdegames newstuff widgetsaddons xmlgui
USE_QT=		concurrent core dbus gui network qml quick svg widgets xml \
		buildtools_build qmake_build

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
