# $FreeBSD: head/x11-toolkits/kf5-kcompletion/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kcompletion
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 text completion helpers and widgets

USES=		cmake:outsource compiler:c++11-lib kde:5 qt:5 tar:xz
USE_KDE=	config ecm widgetsaddons
USE_QT=		buildtools_build core gui linguisttools qmake_build \
		widgets xml

.include <bsd.port.mk>
