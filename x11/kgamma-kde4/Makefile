# $FreeBSD: head/x11/kgamma-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kgamma
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	x11 kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 monitor calibration tool

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build
USE_XORG=	x11 xxf86vm

.include <bsd.port.mk>
