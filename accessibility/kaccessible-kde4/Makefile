# $FreeBSD: head/accessibility/kaccessible-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kaccessible
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	accessibility kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Accessibility services for KDE

LIB_DEPENDS=	libspeechd.so:accessibility/speech-dispatcher

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		corelib dbus gui xml \
		qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
