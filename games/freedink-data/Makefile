# Created by: Stephen Hurd <shurd@FreeBSD.org>
# $FreeBSD: head/games/freedink-data/Makefile 471932 2018-06-07 16:24:47Z shurd $

PORTNAME=	freedink-data
PORTVERSION=	1.08.${PORTVER}
CATEGORIES=	games
MASTER_SITES=	GNU/freedink

MAINTAINER=	shurd@FreeBSD.org
COMMENT=	Game data for games/freedink (Dink Smallwood)

USES=		gettext gmake
NO_BUILD=	yes

PORTVER=	20170409

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
