# $FreeBSD: head/textproc/libkomparediff2/Makefile 466879 2018-04-09 18:43:58Z tcberner $

PORTNAME=	libkomparediff2
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	textproc kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library to compare files and strings

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons ecm i18n kio parts \
		service widgetsaddons xmlgui
USE_QT5=	core dbus gui widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
