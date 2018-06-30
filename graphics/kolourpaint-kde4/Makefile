# $FreeBSD: head/graphics/kolourpaint-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kolourpaint
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	graphics kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 paint program

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4 qimageblitz
USE_QT=		moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
