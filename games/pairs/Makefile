# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: head/games/pairs/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	pairs
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	1
CATEGORIES=	games kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Memory and pairs game for KDE

LICENSE=	GPLv2

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	declarative opengl phonon xmlpatterns \
		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
