# Created by: Jose Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/emulators/mupen64plus-video-glide64mk2/Makefile 441503 2017-05-23 05:03:14Z rezny $

PORTREVISION=	8
PKGNAMESUFFIX=	-video-glide64mk2

COMMENT=	Glide64mk2 video plugin for Mupen64Plus

LIB_DEPENDS=	libmupen64plus.so.2:emulators/mupen64plus-core \
		libboost_thread.so:devel/boost-libs

USE_GL=		gl
USE_SDL=	sdl2

MASTERDIR=	${.CURDIR}/../mupen64plus-core

OPTIONS_DEFINE=	#

CFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/${PORTNAME}
LDFLAGS+=	-L${LOCALBASE}/lib

.include "${MASTERDIR}/Makefile"
