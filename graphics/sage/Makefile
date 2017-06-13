# Created by: Janni
# $FreeBSD: head/graphics/sage/Makefile 441503 2017-05-23 05:03:14Z rezny $

PORTNAME=	sage
PORTVERSION=	0.2.0
PORTREVISION=	7
CATEGORIES=	graphics devel
MASTER_SITES=	SF/worldforge/${PORTNAME}%20%28OpenGL%20helper%20lib%29/${PORTVERSION}

MAINTAINER=	oliver@FreeBSD.org
COMMENT=	OpenGL extension library

CONFIGURE_ARGS=	--program-transform-name=
GNU_CONFIGURE=	yes
USE_GL=		yes
USES=		libtool pathfix
USE_LDCONFIG=	yes
USE_SDL=	sdl

CFLAGS+=	-I${LOCALBASE}/include

post-patch:
	@${REINPLACE_CMD} -e 's|sdl-config|${SDL_CONFIG}|g' ${WRKSRC}/configure

.include <bsd.port.mk>
