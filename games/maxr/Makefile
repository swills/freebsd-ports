# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/games/maxr/Makefile 455597 2017-12-05 18:13:46Z amdmi3 $

PORTNAME=	maxr
PORTVERSION=	0.2.9
CATEGORIES=	games
MASTER_SITES=	http://www.maxr.org/downloads/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Mechanized Assault and Exploration Reloaded

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/data/COPYING

USES=		cmake compiler:c++11-lib dos2unix
DOS2UNIX_FILES=	src/config/selectplatformconfig.h
USE_SDL=	sdl2 mixer2 net2

PLIST_FILES=	bin/${PORTNAME}
PORTDATA=	*

DESKTOP_ENTRIES="M.A.X.R." \
		"" \
		"${DATADIR}/maxr.png" \
		"maxr" \
		"Game;StrategyGame;" \
		false

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD && ${OSVERSION} < 1100000
BROKEN=		does not build on 10.x
.endif

.include <bsd.port.post.mk>
