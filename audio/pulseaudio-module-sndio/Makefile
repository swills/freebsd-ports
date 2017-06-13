# Created by: Tobias Kortkamp <t@tobik.me>
# $FreeBSD: head/audio/pulseaudio-module-sndio/Makefile 434159 2017-02-15 12:28:29Z tobik $

PORTNAME=	pulseaudio-module-sndio
PORTVERSION=	9.0
PORTREVISION=	1
CATEGORIES=	audio

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Sndio module for PulseAudio

LICENSE=	ISCL

LIB_DEPENDS+=	libsndio.so:audio/sndio \
		libpulse.so:audio/pulseaudio

USES=		pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	t6

MAKE_ARGS=	STAGEDIR="${STAGEDIR}"

PULSE_MODDIR=	`pkg-config --variable=modlibexecdir libpulse`
PLIST_FILES=	${PULSE_MODDIR}/module-sndio.so

.include <bsd.port.mk>
