# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/games/lbreakout/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	lbreakout
PORTVERSION=	010315
PORTREVISION=	9
CATEGORIES=	games
MASTER_SITES=	SF/lgames/${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Nice clone of classical Breakout game

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USE_SDL=	sdl
USES=		gmake
GNU_CONFIGURE=	yes
LIBS+=		-lcompat

pre-install:
	${MKDIR} ${STAGEDIR}/var/games/${PORTNAME}

post-install:
	${MV} ${STAGEDIR}/var/games/${PORTNAME}/lbreakout.hscr \
		${STAGEDIR}/var/games/${PORTNAME}/lbreakout.hscr.sample

.include <bsd.port.mk>
