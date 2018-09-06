# $FreeBSD: head/x11/kgamma-kde4/Makefile 478483 2018-08-30 18:40:36Z adridg $

PORTNAME=	kgamma
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	x11 kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 monitor calibration tool

DEPRECATED=	KDE4 is EOL upstream
EXPIRATION_DATE=	2018-12-31

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build
USE_XORG=	x11 xxf86vm

.include <bsd.port.mk>
