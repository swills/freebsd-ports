# Created by: chinsan
# $FreeBSD: head/games/gnake/Makefile 420697 2016-08-23 15:17:53Z marino $

PORTNAME=	gnake
PORTVERSION=	0.94b
CATEGORIES=	games
MASTER_SITES=	http://www.sourcefiles.org/Games/Arcade/
DISTNAME=	Gnake.${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Nibbles clone for GNU/Linux and *BSD

LICENSE=	GPLv2

USES=		ncurses
LDFLAGS+=	-L${LOCALBASE}/lib -lncurses
CFLAGS+=	-Wall

WRKSRC=		${WRKDIR}/${PORTNAME}
PORTDOCS=	README
PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=	DOCS

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} -o ${WRKSRC}/${PORTNAME} \
		${WRKSRC}/gnake.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
