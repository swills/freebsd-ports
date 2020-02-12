# Created by: Alexander Yerenkow <yerenkow@gmail.com>
# $FreeBSD$

PORTNAME=	residualvm
PORTVERSION=	0.3.1
PORTREVISION=	0
CATEGORIES=	games

MAINTAINER=	yerenkow@gmail.com
COMMENT=	ResidualVM allows you to indulge with classic games like Grim Fandango and Myst III

LICENSE=	GPLv2

BROKEN_armv6=		fails to link: ld: libgrim.a has EABI version 0, but target residualvm has EABI version 5
BROKEN_armv7=		fails to link: ld: libgrim.a has EABI version 0, but target residualvm has EABI version 5

USE_GITHUB=	yes

USE_SDL=	sdl2
HAS_CONFIGURE=	yes
USES=		gmake sdl jpeg gl iconv
USE_GL=		glu glew gl

LIB_DEPENDS+=	libvorbisfile.so:audio/libvorbis
LIB_DEPENDS+=	libogg.so:audio/libogg
LIB_DEPENDS+=	libmad.so:audio/libmad
LIB_DEPENDS+=	libpng16.so:graphics/png
LIB_DEPENDS+=	libtheoradec.so:multimedia/libtheora
LIB_DEPENDS+=	libmpeg2.so:multimedia/libmpeg2
LIB_DEPENDS+=	libfreetype.so:print/freetype2

OPTIONS_DEFINE=	DOCS

INSTALL_TARGET=install-strip

post-patch:
	@${REINPLACE_CMD} -e 's|{datarootdir}/man|{prefix}/man|' ${WRKSRC}/configure

.include <bsd.port.mk>
