# $FreeBSD: head/games/kanagram-kde4/Makefile 462619 2018-02-22 19:03:17Z tcberner $

PORTNAME=	kanagram
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	games kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Letter order game for KDE 4

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs libkdeedu automoc4
USE_QT4=	xml corelib declarative gui opengl script xml \
		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
