# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: head/games/pairs-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	pairs
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	games kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Memory and pairs game for KDE

LICENSE=	GPLv2

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		declarative opengl phonon xmlpatterns \
		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
