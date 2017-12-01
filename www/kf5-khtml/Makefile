# $FreeBSD: head/www/kf5-khtml/Makefile 455251 2017-12-01 07:19:53Z antoine $

PORTNAME=	khtml
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	www kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 KTHML rendering engine

LIB_DEPENDS=	libgif.so:graphics/giflib \
		libpng.so:graphics/png

USES=		cmake:outsource compiler:c++11-lib gettext gperf jpeg kde:5 \
		tar:xz
USE_KDE=	archive auth bookmarks codecs completion config \
		configwidgets coreaddons ecm globalaccel i18n iconthemes \
		jobwidgets js kio notifications parts service sonnet \
		textwidgets wallet widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build core dbus gui network phonon4 \
		printsupport qmake_build widgets x11extras xml
USE_XORG=	ice sm x11 xext

.include <bsd.port.mk>
