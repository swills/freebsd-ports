# $FreeBSD: head/japanese/kiten-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kiten
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	japanese kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Japanese reference/study tool for KDE 4

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		corelib moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
