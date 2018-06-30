# $FreeBSD: head/japanese/kiten/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kiten
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	japanese kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Japanese reference/study tool for KDE

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	auth archive codecs completion config configwidgets coreaddons \
		crash doctools ecm i18n jobwidgets js khtml kio parts service \
		sonnet textwidgets widgetsaddons xmlgui
USE_QT=		core dbus gui network widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
