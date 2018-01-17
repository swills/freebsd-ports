# Created by: Ganael Laplanche <ganael.laplanche@martymac.org>
# $FreeBSD: head/games/openjazz/Makefile 459163 2018-01-16 11:10:14Z martymac $

PORTNAME=	openjazz
PORTVERSION=	20171024
CATEGORIES=	games

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Free re-implementation of the Jazz Jackrabbit(tm) game engine

LICENSE=	GPLv2

USES=	dos2unix gmake

USE_GITHUB=	yes
GH_ACCOUNT=	AlisterT

DOS2UNIX_REGEX=	.*\.(h|cpp)
ALL_TARGET=	OpenJazz
USE_XORG=	x11 xext xrandr xrender xau xdmcp
USE_SDL=	sdl

CXXFLAGS+=	-I${LOCALBASE}/include `${SDL_CONFIG} --cflags` \
		-DDATAPATH=\\\"${DATADIR}/\\\" -DHOMEDIR
LDFLAGS+=	-lpthread -L${LOCALBASE}/lib `${SDL_CONFIG} --libs`

SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/openjazz.000 ${STAGEDIR}${DATADIR}
	${INSTALL_PROGRAM} ${WRKSRC}/OpenJazz ${STAGEDIR}${PREFIX}/bin/openjazz

.include <bsd.port.mk>
