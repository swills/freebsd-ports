# $FreeBSD: head/accessibility/kmousetool/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	kmousetool
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	1
CATEGORIES=	accessibility kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Automatic mouse click tool for KDE

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	qmake_build moc_build rcc_build uic_build
USE_XORG=	xtst

.include <bsd.port.mk>
