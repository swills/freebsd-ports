# $FreeBSD: head/deskutils/superkaramba-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	superkaramba
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	5
CATEGORIES=	deskutils kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Widget framework for KDE

USES=		cmake:outsource kde:4 python:2.7 qt:4 tar:xz
USE_KDE=	kdelibs automoc4 qimageblitz
USE_QT=		qmake_build moc_build rcc_build uic_build
USE_LDCONFIG=	yes
USE_CXXSTD=	gnu++98

.include <bsd.port.mk>
