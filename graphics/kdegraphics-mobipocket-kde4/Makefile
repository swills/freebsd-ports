# $FreeBSD: head/graphics/kdegraphics-mobipocket-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kdegraphics-mobipocket
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	graphics kde kde-kde4
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Mobipocket plugins for Strigi indexing and thumbnails

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4 strigi
USE_QT=		corelib gui qmake_build moc_build uic_build rcc_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
