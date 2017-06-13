# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/games/endgame-singularity-music/Makefile 437328 2017-03-30 21:12:43Z mat $

PORTNAME=	endgame-singularity-music
PORTVERSION=	007
PORTREVISION=	1
CATEGORIES=	games

MAINTAINER=	lifanov@FreeBSD.org
COMMENT=	Music pack for endgame-singularity

LICENSE=	CC-BY-SA-3.0

NO_ARCH=	yes
NO_BUILD=	yes

USE_GITHUB=	yes
GH_TUPLE=	singularity:singularity-music:968faad

DATADIR=	${PREFIX}/share/singularity

do-install:
	cd ${WRKSRC}/music && ${COPYTREE_SHARE} "*.ogg win lose" ${STAGEDIR}${DATADIR}/music

.include <bsd.port.mk>
