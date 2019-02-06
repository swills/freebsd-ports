# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/graphics/bmp2html/Makefile 492298 2019-02-06 10:26:57Z ehaupt $

PORTNAME=	bmp2html
PORTVERSION=	0.1
PORTREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	LOCAL/ehaupt
DISTNAME=	${PORTNAME}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	BMP to HTML converter

LICENSE=	PD

USE_SDL=	sdl

PLIST_FILES=	bin/bmp2html

post-extract:
	@${RM} ${WRKSRC}/${PORTNAME}

do-build:
	${CC} ${CFLAGS} `${SDL_CONFIG} --cflags` -c \
		-o ${WRKSRC}/${PORTNAME}.o ${WRKSRC}/${PORTNAME}.c
	${CC} ${LDFLAGS} `${SDL_CONFIG} --libs` \
		-o ${WRKSRC}/${PORTNAME} ${WRKSRC}/${PORTNAME}.o

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
