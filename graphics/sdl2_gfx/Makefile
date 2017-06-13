# Created by: ijliao
# $FreeBSD: head/graphics/sdl2_gfx/Makefile 432169 2017-01-22 22:27:54Z rene $

PORTNAME=	sdl2_gfx
PORTVERSION=	1.0.1
PORTREVISION=	4
CATEGORIES=	graphics
MASTER_SITES=	http://www.ferzkopp.net/Software/SDL2_gfx/
DISTNAME=	SDL2_gfx-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SDL graphics drawing primitives and other support functions

LICENSE=	ZLIB

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		gmake libtool pathfix
USE_SDL=	sdl2
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	MMX

MMX_CONFIGURE_ENABLE=	mmx
MMX_CFLAGS=		-DUSE_MMX

post-patch:
	${TOUCH} -mr ${WRKSRC}/configure.in ${WRKSRC}/aclocal.m4

.include <bsd.port.mk>
