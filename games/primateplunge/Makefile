# Created by: Jose Alonso Cardenas Marquez <acardenas@bsd.org.pe>
# $FreeBSD: head/games/primateplunge/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	primateplunge
PORTVERSION=	1.1
PORTREVISION=	8
CATEGORIES=	games
MASTER_SITES=	http://www.aelius.com/primateplunge/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Primate Plunge is an arcade game

LICENSE=	UDEVGAME
LICENSE_NAME=	uDevGame license
LICENSE_FILE=	${WRKSRC}/COPYING
LICENSE_PERMS=	# empty

RUN_DEPENDS=	timidity:audio/timidity

GNU_CONFIGURE=	yes
USE_SDL=	sdl mixer

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${WRKSRC}/AUTHORS ${WRKSRC}/TIPS ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
