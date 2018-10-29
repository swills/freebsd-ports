# $FreeBSD: head/x11-themes/kf5-qqc2-desktop-style/Makefile 483125 2018-10-27 11:50:58Z tcberner $

PORTNAME=	qqc2-desktop-style
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-themes kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt QuickControl2 style for KDE

USES=		cmake:outsource compiler:c++11-lang kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons ecm iconthemes \
		kirigami2 widgetsaddons
USE_QT=		gui network qml quick widgets xml \
		buildtools_build core qmake_build

.include <bsd.port.mk>
