# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: head/multimedia/kdemultimedia-ffmpegthumbs-kde4/Makefile 468844 2018-05-02 15:07:27Z jbeich $

PORTNAME=	ffmpegthumbs
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	6
CATEGORIES=	multimedia kde kde-kde4
PKGNAMEPREFIX=	kdemultimedia-
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	FFmpeg-based thumbnail generator for video files

LICENSE=	GPLv2

LIB_DEPENDS=	libswscale.so:multimedia/ffmpeg

USES=		cmake:outsource kde:4 pkgconfig tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	moc_build qmake_build rcc_build uic_build \
		corelib dbus gui network svg xml

.include <bsd.port.mk>
