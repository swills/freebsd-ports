# Created by: Kirill Ponomarew <ponomarew@oberon.net>
# $FreeBSD: head/games/openglad/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	openglad
PORTVERSION=	0.98
PORTREVISION=	10
CATEGORIES=	games
MASTER_SITES=	SF/snowstorm/OpenGlad/Openglad-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SDL port of an old DOS game called Gladiator

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake
USE_SDL=	sdl mixer
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

DESKTOP_ENTRIES="OpenGlad" "" "" "${PORTNAME}" "" ""

NOT_FOR_ARCHS=	sparc64

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e \
		's|COPYING INSTALL|INSTALL|' ${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e \
		's|/path/to/data/dir|${DATADIR}|' ${WRKSRC}/openglad.cfg

.include <bsd.port.mk>
