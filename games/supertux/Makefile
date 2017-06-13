# Created by: michael johnson <ahze@ahze.net>
# $FreeBSD: head/games/supertux/Makefile 441503 2017-05-23 05:03:14Z rezny $

PORTNAME=	supertux
PORTVERSION=	0.1.3
PORTREVISION=	13
CATEGORIES=	games
MASTER_SITES=	https://github.com/SuperTux/downloads/raw/master/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Side-scroller game similar to Super Mario Brothers

USES=		gmake tar:bzip2
USE_SDL=	image mixer
USE_GL=		gl
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=		--disable-debug

PORTSCOUT=	limit:^0\.1

post-patch:
	@${REINPLACE_CMD} -e 's,Menu::,,' ${WRKSRC}/src/menu.h

.include <bsd.port.mk>
