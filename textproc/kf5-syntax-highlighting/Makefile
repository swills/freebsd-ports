# $FreeBSD: head/textproc/kf5-syntax-highlighting/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	syntax-highlighting
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	textproc kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 syntax highlighting engine for structured text and code

USES=		cmake:outsource compiler:c++11-lib kde:5 perl5 qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		buildtools_build core gui linguisttools_build \
		network testlib qmake_build

.include <bsd.port.mk>
