# $FreeBSD: head/devel/qt5-qdoc/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	qdoc
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel textproc
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt documentation generator

USE_QT=		core qml buildtools_build qdoc-data_run
USES=		qmake qt-dist:5,tools

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}
INSTALL_WRKSRC=	${BUILD_WRKSRC}

PLIST_FILES=	${QT_BINDIR}/qdoc

.include <bsd.port.mk>
