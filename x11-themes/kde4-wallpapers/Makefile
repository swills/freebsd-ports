# $FreeBSD: head/x11-themes/kde4-wallpapers/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	kde-wallpapers
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	x11-themes kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Set of wallpapers for the KDE Plasma workspace

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	moc_build qmake_build rcc_build uic_build

NO_BUILD=	yes

.include <bsd.port.mk>
