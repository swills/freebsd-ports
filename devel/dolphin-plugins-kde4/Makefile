# $FreeBSD: head/devel/dolphin-plugins-kde4/Makefile 462619 2018-02-22 19:03:17Z tcberner $

PORTNAME=	dolphin-plugins
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	devel kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plugins for Dolphin file manager

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs libkonq automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
