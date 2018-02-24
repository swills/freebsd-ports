# $FreeBSD: head/x11/kgamma-kde4/Makefile 462619 2018-02-22 19:03:17Z tcberner $

PORTNAME=	kgamma
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	x11 kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 monitor calibration tool

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build
USE_XORG=	x11 xxf86vm

.include <bsd.port.mk>
