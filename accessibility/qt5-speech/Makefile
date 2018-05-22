# $FreeBSD: head/accessibility/qt5-speech/Makefile 470288 2018-05-18 12:27:43Z rakuco $

PORTNAME=	speech
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	accessibility
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Accessibilty features for Qt5

LIB_DEPENDS=	libspeechd.so:accessibility/speech-dispatcher

USES=		pkgconfig qmake:outsource
USE_QT5=	core gui buildtools_build qmake_build
QT_DIST=	${PORTNAME}

.include <bsd.port.mk>
