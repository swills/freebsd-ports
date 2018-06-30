# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: head/audio/juk-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	juk
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	audio kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Jukebox, tagger and music collection manager

LICENSE=	GPLv2

LIB_DEPENDS=	libtag.so:audio/taglib

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT=		moc_build qmake_build rcc_build uic_build

CMAKE_ARGS=	-DWITH_TunePimp:BOOL=OFF

.include <bsd.port.mk>
