# $FreeBSD: head/x11-themes/kf5-kiconthemes/Makefile 475857 2018-07-29 22:18:44Z gerald $

PORTNAME=	kiconthemes
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-themes kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library for handling icons in applications

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	archive auth codecs config configwidgets coreaddons ecm \
		i18n itemviews widgetsaddons
USE_QT=		buildtools_build concurrent core dbus gui qmake_build \
		script svg widgets xml

.include <bsd.port.mk>
