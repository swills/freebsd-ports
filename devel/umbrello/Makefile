# $FreeBSD: head/devel/umbrello/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	umbrello
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	8
CATEGORIES=	devel kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	UML modeller for KDE

LIB_DEPENDS=	libboost_thread.so:devel/boost-libs

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_GNOME=	libxml2 libxslt
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
