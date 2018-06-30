# $FreeBSD: head/games/kanagram/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kanagram
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Letter order game for KDE

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	attica auth codecs config configwidgets coreaddons crash \
		doctools ecm i18n kdeclarative kio libkeduvocdocument newstuff \
		package service sonnet widgetsaddons xmlgui
USE_QT=		core dbus gui network opengl qml quick speech svg widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
