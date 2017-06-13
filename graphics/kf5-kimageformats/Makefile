# Created by: tcberner
# $FreeBSD: head/graphics/kf5-kimageformats/Makefile 438880 2017-04-19 14:59:40Z tcberner $

PORTNAME=	kimageformats
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	graphics kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library providing support for additional image formats

LIB_DEPENDS=	libIlmImf.so:graphics/OpenEXR \
		libHalf.so:graphics/ilmbase

USES=		cmake:outsource compiler:c++11-lib kde:5 pkgconfig tar:xz
USE_KDE=	archive ecm 
USE_QT5=	buildtools_build core gui printsupport qmake_build widgets

.include <bsd.port.mk>
