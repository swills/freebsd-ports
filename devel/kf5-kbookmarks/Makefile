# $FreeBSD: head/devel/kf5-kbookmarks/Makefile 492794 2019-02-12 17:48:25Z tcberner $

PORTNAME=	kbookmarks
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library for bookmarks and the XBEL format

USES=		cmake compiler:c++11-lib kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons ecm \
		iconthemes widgetsaddons xmlgui
USE_QT=		buildtools_build core dbus gui linguisttools \
		qmake_build widgets xml

.include <bsd.port.mk>
