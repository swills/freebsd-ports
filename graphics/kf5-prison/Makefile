# $FreeBSD: head/graphics/kf5-prison/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	prison
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	graphics kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	API to produce barcodes

LIB_DEPENDS=	libdmtx.so:graphics/libdmtx \
		libqrencode.so:graphics/libqrencode

USES=		cmake:outsource compiler:c++11-lang kde:5 qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		buildtools_build core gui qmake_build testlib widgets

.include <bsd.port.mk>
