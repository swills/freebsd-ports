# Created by: gahr
# $FreeBSD: head/audio/libgroove/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	libgroove
PORTVERSION=	4.3.0
PORTREVISION=	4
CATEGORIES=	audio

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Audio dispatching library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg \
		libchromaprint.so:audio/chromaprint \
		libebur128.so:audio/libebur128 \
		libspeexdsp.so:audio/speexdsp

USE_GITHUB=	yes
GH_ACCOUNT=	andrewrk

USES=		cmake:outsource
USE_SDL=	sdl2
USE_LDCONFIG=	yes
CFLAGS+=	-Wno-error=deprecated-declarations # ffmpeg 3.1

PLIST_SUB+=	VER1=${PORTVERSION:R:R} \
		VER3=${PORTVERSION}

.include <bsd.port.mk>
