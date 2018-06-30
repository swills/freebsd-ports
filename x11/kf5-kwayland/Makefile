# $FreeBSD: head/x11/kf5-kwayland/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kwayland
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 Client and Server library wrapper for the Wayland libraries

BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:multimedia/v4l_compat
LIB_DEPENDS=	libwayland-client.so:graphics/wayland

LICENSE=	LGPL21 LGPL3
LICENSE_COMB=	dual
LICENSE_FILE_LGPL21=	${WRKSRC}/COPYING.LIB

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 pkgconfig \
		qt:5 tar:xz
USE_GL=		egl
USE_KDE=	ecm
USE_QT=		buildtools_build concurrent core gui qmake_build testlib

.include <bsd.port.mk>
