# $FreeBSD: head/x11/kf5-kwindowsystem/Makefile 477922 2018-08-23 18:49:16Z adridg $

PORTNAME=	kwindowsystem
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library for access to the windowing system

LIB_DEPENDS=	libxcb-keysyms.so:x11/xcb-util-keysyms

USES=		cmake:outsource compiler:c++11-lib kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		buildtools_build core gui linguisttools qmake_build \
		testlib widgets x11extras
USE_XORG=	ice sm x11 xcb xext xfixes xrender

.include <bsd.port.mk>
