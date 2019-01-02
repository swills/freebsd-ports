# $FreeBSD: head/lang/kf5-kross/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	kross
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	lang kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 multi-language application scripting

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons doctools ecm i18n iconthemes itemviews \
		jobwidgets kio parts service solid sonnet textwidgets \
		widgetsaddons xmlgui
USE_QT=		buildtools_build core dbus gui network qmake_build \
		script uiplugin uitools widgets xml

.include <bsd.port.mk>
