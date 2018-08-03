# $FreeBSD: head/textproc/kf5-sonnet/Makefile 475857 2018-07-29 22:18:44Z gerald $

PORTNAME=	sonnet
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	textproc kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 plugin-based spell checking library

LIB_DEPENDS=	libaspell.so:textproc/aspell \
		libhunspell-1.6.so:textproc/hunspell

USES=		cmake:outsource compiler:c++11-lib kde:5 qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		buildtools_build core gui linguisttools qmake_build \
		testlib widgets

.include <bsd.port.mk>
