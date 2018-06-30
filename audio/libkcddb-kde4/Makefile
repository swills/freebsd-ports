# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: head/audio/libkcddb-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	libkcddb
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	5
CATEGORIES=	audio kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE CDDB library

LIB_DEPENDS=	libmusicbrainz5.so:audio/libmusicbrainz5

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT=		qtestlib moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
