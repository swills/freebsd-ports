# $FreeBSD: head/graphics/kdegraphics-svgpart-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	svgpart
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	graphics kde kde-kde4
PKGNAMEPREFIX=	kdegraphics-
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	SVG KPart

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
