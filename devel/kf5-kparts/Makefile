# $FreeBSD: head/devel/kf5-kparts/Makefile 477922 2018-08-23 18:49:16Z adridg $

PORTNAME=	kparts
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 document centric plugin system

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		i18n iconthemes jobwidgets kio notifications service \
		sonnet textwidgets widgetsaddons xmlgui
USE_QT=		buildtools_build core dbus gui network qmake_build widgets \
		xml

.include <bsd.port.mk>
