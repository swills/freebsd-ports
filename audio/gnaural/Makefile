# Created by: Ganael Laplanche <ganael.laplanche@martymac.org>
# $FreeBSD: head/audio/gnaural/Makefile 479017 2018-09-05 10:05:29Z martymac $

PORTNAME=	gnaural
PORTVERSION=	1.0.20110606
PORTREVISION=	4
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/Gnaural/

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Binaural beat generator

LICENSE=	GPLv2 LGPL21
LICENSE_COMB=	multi

LIB_DEPENDS=	libportaudio.so:audio/portaudio \
		libsndfile.so:audio/libsndfile

GNU_CONFIGURE=	yes
USES=		desktop-file-utils gnome pkgconfig
USE_CSTD=	gnu89
USE_GNOME=	libglade2

.include <bsd.port.mk>
