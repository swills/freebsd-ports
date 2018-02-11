# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: head/multimedia/kdemultimedia-mplayerthumbs-kde4/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	mplayerthumbs
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	multimedia kde kde-kde4
PKGNAMEPREFIX=	kdemultimedia-
PKGNAMESUFIFX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	MPlayer-based thumbnail generator for video files

LICENSE=	LGPL21

RUN_DEPENDS=	mplayer:multimedia/mplayer

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	phonon moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
