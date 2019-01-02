# $FreeBSD: head/www/kf5-kjs/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	kjs
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	www kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library providing an ECMAScript interpreter

LIB_DEPENDS=	libpcre.so:devel/pcre

USES=		cmake compiler:c++11-lib kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	ecm doctools
USE_QT=		buildtools_build core qmake_build

.include <bsd.port.mk>
