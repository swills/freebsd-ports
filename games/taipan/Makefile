# Created by: Dave Walton <dwalton@acm.org>
# $FreeBSD: head/games/taipan/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	taipan
PORTVERSION=	0.9
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	SUNSITE/games/textrpg

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Classic role-playing game from the 1980s

USES=		ncurses
MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}" LIBS="${LDFLAGS} -lncurses"

PORTDOCS=	README
PLIST_FILES=	bin/taipan

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/taipan ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
