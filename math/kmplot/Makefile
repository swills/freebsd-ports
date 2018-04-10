# $FreeBSD: head/math/kmplot/Makefile 466873 2018-04-09 18:13:24Z tcberner $

PORTNAME=	kmplot
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	math kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Mathematical function plotter for KDE

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons ecm emoticons guiaddons i18n \
		iconthemes init itemmodels itemviews jobwidgets \
		kdelibs4support kio notifications parts service solid sonnet \
		textwidgets unitconversion widgetsaddons windowsystem xmlgui
USE_QT5=	core dbus gui network printsupport svg widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
