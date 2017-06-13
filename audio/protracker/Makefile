# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/audio/protracker/Makefile 440612 2017-05-11 06:00:26Z antoine $

PORTNAME=	protracker
DISTVERSION=	2.3d
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	LOCAL/ehaupt
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${PORTNAME}-extras-1.tar.gz

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Amiga ProTracker clone

LICENSE=	WTFPL
LICENSE_FILE=	${WRKSRC}/COPYING.txt

USES=		localbase:ldflags
USE_SDL=	sdl2

LDFLAGS+=	-lSDL2 -lm

PLIST_FILES=	bin/protracker man/man1/protracker.1.gz \
		share/applications/protracker.desktop \
		share/pixmaps/protracker.png

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} ${WRKSRC}/trunk/src/*.c \
		${WRKSRC}/trunk/src/gfx/*.c -o ${WRKSRC}/trunk/protracker

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/bin ${STAGEDIR}${MANPREFIX}/man/man1 \
		${STAGEDIR}${DESKTOPDIR}
	${INSTALL_PROGRAM} ${WRKSRC}/trunk/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKDIR}/${PORTNAME}-extras-1/${PORTNAME}.1 \
		${STAGEDIR}${MANPREFIX}/man/man1
	${INSTALL_DATA} ${WRKDIR}/${PORTNAME}-extras-1/*.desktop \
		${STAGEDIR}${DESKTOPDIR}
	${INSTALL_DATA} ${WRKDIR}/${PORTNAME}-extras-1/*.png \
		${STAGEDIR}${PREFIX}/share/pixmaps

.include <bsd.port.mk>
