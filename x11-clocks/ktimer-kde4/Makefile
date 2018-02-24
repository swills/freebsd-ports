# $FreeBSD: head/x11-clocks/ktimer-kde4/Makefile 462619 2018-02-22 19:03:17Z tcberner $

PORTNAME=	ktimer
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	x11-clocks kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Countdown launcher for KDE

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
