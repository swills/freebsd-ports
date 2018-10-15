# $FreeBSD: head/accessibility/qt5-speech/Makefile 482034 2018-10-14 08:01:13Z tcberner $

PORTNAME=	speech
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	accessibility
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Accessibilty features for Qt5

LIB_DEPENDS=	libspeechd.so:accessibility/speech-dispatcher

USES=		compiler:c++11-lang pkgconfig qmake:outsource qt-dist:5,speech
USE_QT=		core gui buildtools_build qmake_build

.include <bsd.port.mk>
