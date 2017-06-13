# $FreeBSD: head/audio/gstreamer1-plugins-taglib/Makefile 441882 2017-05-27 22:30:08Z linimon $

PORTREVISION=	0
CATEGORIES=	audio

COMMENT=	GStreamer taglib plugin for adding APEv2 and ID3v2 headers

BROKEN_armv6=		fails to compile: textidentificationframe.h file not found

GST_PLUGIN=	taglib
DIST=		good

MASTERDIR=	${.CURDIR}/../../multimedia/gstreamer1-plugins

.include "${MASTERDIR}/Makefile"
