# Created by: tcberner
# $FreeBSD: head/x11-toolkits/kf5-kirigami2/Makefile 448892 2017-08-29 05:40:51Z tcberner $

PORTNAME=	kirigami2
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	QtQuick based components set

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	ecm kdeclarative plasma-framework
USE_QT5=	buildtools_build core gui linguisttools network qmake_build \
		qml quick quickcontrols2 svg testlib widgets

.include <bsd.port.mk>
