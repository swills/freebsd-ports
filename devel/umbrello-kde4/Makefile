# $FreeBSD: head/devel/umbrello-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	umbrello
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	10
CATEGORIES=	devel kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	UML modeller for KDE

LIB_DEPENDS=	libboost_thread.so:devel/boost-libs

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_GNOME=	libxml2 libxslt
USE_QT=		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
