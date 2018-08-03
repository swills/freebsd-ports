# Created by: tcberner
# $FreeBSD: head/x11-toolkits/kf5-kirigami2/Makefile 475857 2018-07-29 22:18:44Z gerald $

PORTNAME=	kirigami2
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	QtQuick based components set

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	ecm kdeclarative
USE_QT=		core dbus gui linguisttools network \
		qml quick quickcontrols2 svg testlib widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
