# Created by: tcberner
# $FreeBSD: head/graphics/kf5-prison/Makefile 438880 2017-04-19 14:59:40Z tcberner $

PORTNAME=	prison
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	graphics kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	API to prodcue barcodes

LIB_DEPENDS=	libdmtx.so:graphics/libdmtx \
		libqrencode.so:graphics/libqrencode

USES=		cmake:outsource compiler:c++11-lang kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core gui qmake_build testlib widgets

.include <bsd.port.mk>
