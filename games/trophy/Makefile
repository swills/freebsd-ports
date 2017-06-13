# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: head/games/trophy/Makefile 424339 2016-10-20 15:58:12Z rakuco $

PORTNAME=	trophy
PORTVERSION=	2.0.3
PORTREVISION=	4
CATEGORIES=	games
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Single player racing game

LICENSE=	GPLv2

LIB_DEPENDS=	libclanCore.so:devel/clanlib1

USES=		pkgconfig

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

PORTDOCS=	AUTHORS COPYING ChangeLog README TODO

OPTIONS_DEFINE=	DOCS

post-patch:
	${REINPLACE_CMD} -e "/^icondir =/s,icons,pixmaps," \
		${WRKSRC}/resources/Makefile.in

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR} && \
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
