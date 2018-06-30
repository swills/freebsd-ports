# $FreeBSD: head/games/kubrick/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kubrick
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:5 qt:5 tar:xz
USE_GL=		gl glu
USE_KDE=	auth codecs config configwidgets coreaddons crash ecm \
		i18n kio libkdegames service widgetsaddons xmlgui
USE_QT=		core dbus gui network opengl qml quick svg widgets xml \
		buildtools_build qmake_build

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
