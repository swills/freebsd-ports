# $FreeBSD: head/textproc/kf5-syntax-highlighting/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	syntax-highlighting
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	textproc kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 syntax highlighting engine for structured text and code

USES=		cmake compiler:c++11-lib kde:5 perl5 qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		buildtools_build core gui linguisttools_build \
		network testlib qmake_build

CMAKE_ARGS=	-DCMAKE_DISABLE_FIND_PACKAGE_Qt5XmlPatterns=TRUE

.include <bsd.port.mk>
