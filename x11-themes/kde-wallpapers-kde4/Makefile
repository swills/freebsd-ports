# $FreeBSD: head/x11-themes/kde-wallpapers-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kde-wallpapers
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	x11-themes kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Set of wallpapers for the KDE Plasma workspace

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT=		moc_build qmake_build rcc_build uic_build

NO_BUILD=	yes

.include <bsd.port.mk>
