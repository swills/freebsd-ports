# $FreeBSD: head/graphics/kdegraphics-svgpart-kde4/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	svgpart
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	graphics kde kde-kde4
PKGNAMEPREFIX=	kdegraphics-
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	SVG KPart

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
