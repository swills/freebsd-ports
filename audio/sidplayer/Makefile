# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/audio/sidplayer/Makefile 419887 2016-08-08 19:04:59Z ehaupt $

PORTNAME=	sidplayer
PORTVERSION=	4.4
PORTREVISION=	8
CATEGORIES=	audio
MASTER_SITES=	http://sidplayer.cebix.net/downloads/ \
		LOCAL/ehaupt
DISTNAME=	SIDPlayer-${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	C64 SID tune player

LICENSE=	GPLv2

USE_SDL=	yes
GNU_CONFIGURE=	yes

SDLINCLUDEDIR=	SDL

OPTIONS_DEFINE=	DOCS
OPTIONS_SUB=	yes
SUB_FILES=	pkg-message

post-patch:
	@${REINPLACE_CMD} -e 's|SDL/SDL_endian\.h|${SDLINCLUDEDIR}/SDL_endian\.h|' \
		${WRKSRC}/src/main_sdl.cpp

do-install:
	${INSTALL} ${WRKSRC}/src/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/PSID\ Demo/* ${STAGEDIR}${DOCSDIR}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
