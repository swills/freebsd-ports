# Created by: tcberner
# $FreeBSD: head/x11-toolkits/kirigami/Makefile 440096 2017-05-04 10:20:30Z tcberner $

PORTNAME=	kirigami
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	x11-toolkits kde # kde-framework
MASTER_SITES=	KDE/stable/${PORTNAME}
DIST_SUBDIR=	KDE/kirigami

MAINTAINER=	kde@FreeBSD.org
COMMENT=	QtQuick based components set

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	ecm kdeclarative plasma-framework
USE_QT5=	buildtools_build core gui linguisttools network qmake_build \
		qml quick svg testlib widgets

.include <bsd.port.mk>
