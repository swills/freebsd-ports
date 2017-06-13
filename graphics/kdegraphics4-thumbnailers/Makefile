# $FreeBSD: head/graphics/kdegraphics4-thumbnailers/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	kdegraphics-thumbnailers
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	1
CATEGORIES=	graphics kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Thumbnailers for various graphics file formats

USES=		cmake:outsource kde:4 pkgconfig tar:xz
USE_KDE=	kdelibs libkdcraw libkexiv2 automoc4
USE_QT4=	gui qmake_build moc_build uic_build rcc_build

.include <bsd.port.mk>
