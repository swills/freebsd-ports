# $FreeBSD: head/games/kgoldrunner/Makefile 484140 2018-11-04 19:00:53Z tcberner $

PORTNAME=	kgoldrunner
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		crash dbusaddons ecm i18n kio libkdegames service \
		widgetsaddons xmlgui
USE_QT=		core dbus declarative gui network widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
