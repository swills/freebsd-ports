# $FreeBSD: head/graphics/ksaneplugin-kde4/Makefile 462619 2018-02-22 19:03:17Z tcberner $

PORTNAME=	ksaneplugin
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	graphics kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 plugin for scanning through libksane

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs libksane automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
