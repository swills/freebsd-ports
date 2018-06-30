# $FreeBSD: head/accessibility/kmousetool-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kmousetool
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	accessibility kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Automatic mouse click tool for KDE

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		qmake_build moc_build rcc_build uic_build
USE_XORG=	xtst

.include <bsd.port.mk>
