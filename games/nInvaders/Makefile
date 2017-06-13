# Created by: Michael L. Hostbaek (mich@freebsdcluster.org)
# $FreeBSD: head/games/nInvaders/Makefile 407592 2016-01-31 08:46:22Z marino $

PORTNAME=	nInvaders
PORTVERSION=	0.1.1
CATEGORIES=	games
MASTER_SITES=	SF
DISTNAME=	ninvaders-${PORTVERSION}

MAINTAINER=	mich@FreeBSD.org
COMMENT=	The nInvaders game is a Space Invaders clone for ncurses

USES=		ncurses

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e "s|^CC|#CC|g" \
		-e "s|^CFLAGS|#CFLAGS|g" ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
