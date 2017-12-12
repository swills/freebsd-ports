# Created by: Alejandro Pulver <alejandro@varnet.biz>
# $FreeBSD: head/games/doom-freedoom/Makefile 455680 2017-12-06 21:32:45Z amdmi3 $

PORTNAME=	freedoom
PORTVERSION=	0.10.1
CATEGORIES=	games
MASTER_SITES=	https://github.com/${PORTNAME}/${PORTNAME}/releases/download/v${PORTVERSION}/
PKGNAMEPREFIX=	${DMPKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Complete Doom-based game IWAD that is Free Software

USES=		zip
NO_BUILD=	yes
NO_ARCH=	yes

DATADIR=	${DMDIR}/${PORTNAME}

PLIST_FILES=	%%DATADIR%%/freedoom1.wad \
		%%DATADIR%%/freedoom2.wad

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/freedoom1.wad ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/freedoom2.wad ${STAGEDIR}${DATADIR}

.include "${.CURDIR}/../doom-data/Makefile.include"

.include <bsd.port.mk>
