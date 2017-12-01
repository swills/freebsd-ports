# $FreeBSD: head/multimedia/gstreamer1-plugins-mpeg2enc/Makefile 455167 2017-11-30 06:13:34Z linimon $

PORTREVISION=	0
CATEGORIES=	multimedia

COMMENT=	GStreamer mpeg encoder plugin

BROKEN_armv6=		fails to compile: 'format_codes.h' file not found
BROKEN_armv7=		fails to compile: 'format_codes.h' file not found

GST_PLUGIN=	mpeg2enc
DIST=		bad

MASTERDIR=	${.CURDIR}/../../multimedia/gstreamer1-plugins

.include "${MASTERDIR}/Makefile"
