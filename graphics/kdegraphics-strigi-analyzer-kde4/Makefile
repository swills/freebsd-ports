# $FreeBSD: head/graphics/kdegraphics-strigi-analyzer-kde4/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	kdegraphics-strigi-analyzer
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	graphics kde kde-kde4
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Strigi analyzers for various graphics file formats

LIB_DEPENDS=	libtiff.so:graphics/tiff

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4 strigi
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
