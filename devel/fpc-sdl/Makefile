# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/fpc-sdl/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-sdl

COMMENT=	Free Pascal interface to SDL library

USE_FPC=	pthreads x11

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	SDL
SDL_DESC=	Install SDL library
OPTIONS_DEFAULT=	SDL

SDL_USE=	SDL=sdl,image,mixer,ttf,gfx

.include "${MASTERDIR}/Makefile"
