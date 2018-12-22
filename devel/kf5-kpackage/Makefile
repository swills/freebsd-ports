# $FreeBSD: head/devel/kf5-kpackage/Makefile 487595 2018-12-16 14:59:10Z tcberner $

PORTNAME=	kpackage
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library to load and install packages

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	archive config coreaddons doctools ecm i18n
USE_QT=		buildtools_build core qmake_build xml

.include <bsd.port.mk>
