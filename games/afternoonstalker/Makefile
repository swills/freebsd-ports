# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: head/games/afternoonstalker/Makefile 460384 2018-01-30 12:35:05Z martymac $

PORTNAME=	afternoonstalker
PORTVERSION=	1.1.5
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://perso.b2b2c.ca/~sarrazip/dev/ \
		LOCAL/martymac

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Clone of the 1981 Night Stalker video game

LICENSE=	GPLv2

LIB_DEPENDS=	libflatzebra-0.1.so:devel/flatzebra

USES=		pkgconfig
USE_SDL=	mixer sdl
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PORTDOCS=	AUTHORS COPYING INSTALL NEWS README THANKS TODO

post-patch:
	@${REINPLACE_CMD} -e 's|^pkgsounddir =.*|pkgsounddir = ${DATADIR}/sounds|' \
		${WRKSRC}/src/Makefile.in
	@${REINPLACE_CMD} -e 's|docdir = .*|docdir = ${DOCSDIR}|' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
