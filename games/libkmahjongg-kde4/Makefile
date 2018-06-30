# $FreeBSD: head/games/libkmahjongg-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	libkmahjongg
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	games kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library for the Mahjongg Solitaire for KDE 4

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs libkdegames automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
