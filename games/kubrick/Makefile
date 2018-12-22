# $FreeBSD: head/games/kubrick/Makefile 487405 2018-12-14 05:07:04Z tcberner $

PORTNAME=	kubrick
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:5 qt:5 tar:xz
USE_GL=		gl glu
USE_KDE=	auth codecs config configwidgets coreaddons crash ecm \
		i18n kio libkdegames service widgetsaddons xmlgui
USE_QT=		core dbus declarative gui network opengl svg widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
