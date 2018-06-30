# $FreeBSD: head/devel/kde-dev-utils/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kde-dev-utils
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE development utilities

USES=		cmake:outsource kde:5 qt:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons ecm i18n itemviews jobwidgets kio parts service \
		solid sonnet textwidgets widgetsaddons xmlgui
USE_QT=		core dbus designer gui network widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
