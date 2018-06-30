# $FreeBSD: head/devel/dolphin-plugins-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	dolphin-plugins
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	devel kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plugins for Dolphin file manager

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs libkonq automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
