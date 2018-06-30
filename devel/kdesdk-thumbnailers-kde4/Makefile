# $FreeBSD: head/devel/kdesdk-thumbnailers-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kdesdk-thumbnailers
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	devel kde kde-kde4
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE thumbnail generator for gettext po files

USES=		cmake:outsource gettext kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
