# $FreeBSD: head/x11/kf5-krunner/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	krunner
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 parallelized query system

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	config coreaddons ecm i18n kio package plasma-framework \
		service solid threadweaver
USE_QT=		buildtools_build core gui network qmake_build qml \
		quick widgets

.include <bsd.port.mk>
