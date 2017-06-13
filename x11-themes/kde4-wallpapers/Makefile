# $FreeBSD: head/x11-themes/kde4-wallpapers/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	kde-wallpapers
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-themes kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Set of wallpapers for the KDE Plasma workspace

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	moc_build qmake_build rcc_build uic_build

NO_BUILD=	yes

.include <bsd.port.mk>
