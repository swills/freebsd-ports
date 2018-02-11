# $FreeBSD: head/accessibility/jovie/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	jovie
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	accessibility kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE text-to-speech system

LIB_DEPENDS=	libspeechd.so:accessibility/speech-dispatcher

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	xml qmake_build moc_build uic_build rcc_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
