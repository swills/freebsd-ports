# $FreeBSD: head/graphics/kdegraphics-thumbnailers-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kdegraphics-thumbnailers
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	graphics kde kde-kde4
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Thumbnailers for various graphics file formats

USES=		cmake:outsource kde:4 pkgconfig qt:4 tar:xz
USE_KDE=	kdelibs libkdcraw libkexiv2 automoc4
USE_QT=		gui qmake_build moc_build uic_build rcc_build

.include <bsd.port.mk>
