# $FreeBSD: head/x11/kf5-krunner/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	krunner
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 parallelized query system

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	config coreaddons ecm i18n kio package plasma-framework \
		service solid threadweaver
USE_QT=		buildtools_build core declarative gui network qmake_build \
		widgets

.include <bsd.port.mk>
