# Created by: Sean Bruno <sbruno@freebsd.org>
# $FreeBSD: head/audio/shout-idjc/Makefile 435311 2017-03-03 06:15:02Z sbruno $

PORTNAME=	libshout-idjc
PORTVERSION=	2.4.1
PORTREVISION=	3
CATEGORIES=	audio python
MASTER_SITES=	SF/idjc/libshout-idjc/

MAINTAINER=	sbruno@FreeBSD.org
COMMENT=	Shoutcast/Icecast Library for audio/idjc

LICENSE=	LGPL20+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libsamplerate.so:audio/libsamplerate \
		libvorbis.so:audio/libvorbis \
		libogg.so:audio/libogg \
		libspeex.so:audio/speex

GNU_CONFIGURE=	yes
USES=		libtool pathfix pkgconfig autoreconf
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

MAKE_JOBS_UNSAFE=	yes

post-patch:
	@${REINPLACE_CMD} '/_XOPEN_SOURCE/d' ${WRKSRC}/configure
	@${REINPLACE_CMD} '/^doc_DATA =/ s|COPYING||' ${WRKSRC}/Makefile.am

.include <bsd.port.mk>
