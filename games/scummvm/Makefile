# Created by: Alex Trull <freebsd.alex@trull.org>
# $FreeBSD$

PORTNAME=	scummvm
PORTVERSION=	2.1.1
CATEGORIES=	games emulators
MASTER_SITES=	http://www.scummvm.org/frs/scummvm/${PORTVERSION}/

PATCH_SITES=	https://github.com/scummvm/scummvm/commit/
PATCHFILES=	8593a9e1e4e8dd1f5dfac9b1304a417df9a742e6.patch:-p1 \
		68758a879e0c8ecc0d40962516d4e808aa4e15e5.patch:-p1

MAINTAINER=	lme@FreeBSD.org
COMMENT=	Interpreter for several adventure games

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libfaad.so:audio/faad \
		libfreetype.so:print/freetype2 \
		libmpeg2.so:multimedia/libmpeg2 \
		libtheoradec.so:multimedia/libtheora

USES=		gmake gnome iconv jpeg sdl tar:xz
HAS_CONFIGURE=	yes
USE_SDL=	sdl2
INSTALLS_ICONS=	yes

CONFIGURE_ARGS=	--disable-alsa \
		--disable-debug \
		--disable-nasm \
		--enable-verbose-build \
		--with-jpeg-prefix=${LOCALBASE} \
		--with-sdl-prefix=${LOCALBASE} \
		--with-zlib-prefix=/usr

LDFLAGS+=	-lpthread

OPTIONS_DEFINE=		CURL DOCS FLAC FLUIDSYNTH LIBA52 MP3 MT32EMU PNG SNDIO TREMOR VORBIS
OPTIONS_DEFAULT=	LIBA52 MP3 MT32EMU PNG VORBIS
OPTIONS_SUB=		yes

LIBA52_DESC=	a52 audio codec support
MT32EMU_DESC=	MT-32 emulator

# curl
CURL_LIB_DEPENDS=	libcurl.so:ftp/curl
CURL_CONFIGURE_ON=	--with-libcurl-prefix=${LOCALBASE}
CURL_CONFIGURE_OFF=	--disable-libcurl

# liba52
LIBA52_LIB_DEPENDS=	liba52.so:audio/liba52
LIBA52_CONFIGURE_ON=	--with-a52-prefix=${LOCALBASE}
LIBA52_CONFIGURE_OFF=	--disable-a52

# tremor
TREMOR_LIB_DEPENDS=	libvorbisidec.so:audio/libtremor
TREMOR_CONFIGURE_ON=	--with-tremor-prefix=${LOCALBASE}
TREMOR_CONFIGURE_OFF=	--disable-tremor

# vorbis
VORBIS_LIB_DEPENDS=	libogg.so:audio/libogg \
			libvorbis.so:audio/libvorbis
VORBIS_CONFIGURE_ON=	--with-ogg-prefix=${LOCALBASE} \
			--with-vorbis-prefix=${LOCALBASE}
VORBIS_CONFIGURE_OFF=	--disable-vorbis \
			--disable-ogg

# mp3
MP3_LIB_DEPENDS=	libmad.so:audio/libmad
MP3_CONFIGURE_ON=	--with-mad-prefix=${LOCALBASE}
MP3_CONFIGURE_OFF=	--disable-mad

# png
PNG_LIB_DEPENDS=	libpng.so:graphics/png
PNG_CONFIGURE_ON=	--with-png-prefix=${LOCALBASE}
PNG_CONFIGURE_OFF=	--disable-png

# flac
FLAC_LIB_DEPENDS=	libFLAC.so:audio/flac
FLAC_CONFIGURE_ON=	--with-flac-prefix=${LOCALBASE}
FLAC_CONFIGURE_OFF=	--disable-flac

# fluidsynth
FLUIDSYNTH_LIB_DEPENDS=		libfluidsynth.so:audio/fluidsynth
FLUIDSYNTH_CONFIGURE_ON=	--with-fluidsynth-prefix=${LOCALBASE}
FLUIDSYNTH_CONFIGURE_OFF=	--disable-fluidsynth

# mt32emu
MT32EMU_CONFIGURE_OFF=	--disable-mt32emu

# sndio
SNDIO_LIB_DEPENDS=	libsndio.so:audio/sndio
SNDIO_CONFIGURE_ON=	--with-sndio-prefix=${LOCALBASE}
SNDIO_CONFIGURE_OFF=	--disable-sndio

.include <bsd.port.pre.mk>

.if ${ARCH} == armv6 || ${ARCH} == armv7
CONFIGURE_ENV+=	ASFLAGS=-meabi=5
.endif

post-patch:
	@${REINPLACE_CMD} -e '/^mandir=/s/datarootdir/prefix/' \
		${WRKSRC}/configure

post-install:
	${INSTALL_DATA} ${WRKSRC}/dists/${PORTNAME}.desktop \
		${STAGEDIR}${DESKTOPDIR}
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.post.mk>
