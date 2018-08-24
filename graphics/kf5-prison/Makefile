# $FreeBSD: head/graphics/kf5-prison/Makefile 477922 2018-08-23 18:49:16Z adridg $

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
