# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: head/x11-themes/kde-base-artwork-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kde-base-artwork
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	x11-themes kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Base artwork for the KDE Plasma Desktop

LICENSE=	GPLv2

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT=		moc_build qmake_build rcc_build uic_build
NO_BUILD=	yes

.include <bsd.port.mk>
