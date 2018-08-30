# $FreeBSD: head/www/kf5-kjs/Makefile 477922 2018-08-23 18:49:16Z adridg $

PORTNAME=	kjs
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	www kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library providing an ECMAScript interpreter

LIB_DEPENDS=	libpcre.so:devel/pcre

USES=		cmake:outsource compiler:c++11-lib kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	ecm doctools
USE_QT=		buildtools_build core qmake_build

.include <bsd.port.mk>
