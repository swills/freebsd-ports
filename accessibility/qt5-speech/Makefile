# $FreeBSD: head/accessibility/qt5-speech/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	speech
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	accessibility
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Accessibilty features for Qt5

LIB_DEPENDS=	libspeechd.so:accessibility/speech-dispatcher

USES=		pkgconfig qmake:outsource
USE_QT5=	core gui buildtools_build qmake_build
QT_DIST=	${PORTNAME}

.include <bsd.port.mk>
