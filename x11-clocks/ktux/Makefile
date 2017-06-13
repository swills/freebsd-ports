# $FreeBSD: head/x11-clocks/ktux/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	ktux
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-clocks kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tux-in-a-Spaceship screen saver

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs workspace automoc4
USE_QT4=	qt3support moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
