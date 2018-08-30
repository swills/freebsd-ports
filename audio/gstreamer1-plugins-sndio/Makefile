# $FreeBSD: head/audio/gstreamer1-plugins-sndio/Makefile 476845 2018-08-10 19:00:45Z tobik $

PORTNAME=	gstreamer1-plugins-sndio
DISTVERSIONPREFIX=	v
DISTVERSION=	1.8.0.1
CATEGORIES=	audio

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Sndio audio sink and source for GStreamer

LICENSE=	ISCL

LIB_DEPENDS=	libgstaudio-1.0.so:multimedia/gstreamer1-plugins \
		libgstbase-1.0.so:multimedia/gstreamer1 \
		libsndio.so:audio/sndio

USE_GITHUB=	yes
GH_ACCOUNT=	t6

USES=		pkgconfig
USE_GNOME=	glib20

PLIST_FILES=	lib/gstreamer-1.0/libgstsndio.so

.include <bsd.port.mk>
