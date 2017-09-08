# Created by: Tobias Kortkamp <t@tobik.me>
# $FreeBSD: head/audio/pulseaudio-module-sndio/Makefile 449353 2017-09-06 18:34:03Z tobik $

PORTNAME=	pulseaudio-module-sndio
DISTVERSION=	10.99.1
CATEGORIES=	audio

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Sndio module for PulseAudio

LICENSE=	ISCL

LIB_DEPENDS+=	libsndio.so:audio/sndio \
		libpulse.so:audio/pulseaudio

USES=		pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	t6

PULSE_MODDIR=	`pkg-config --variable=modlibexecdir libpulse`
PLIST_FILES=	${PULSE_MODDIR}/module-sndio.so
SUB_FILES=	pkg-message

.include <bsd.port.mk>
