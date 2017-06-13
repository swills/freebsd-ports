# $FreeBSD: head/graphics/gstreamer1-plugins-opencv/Makefile 438490 2017-04-14 05:30:25Z jbeich $

PORTREVISION=	2
CATEGORIES=	graphics

COMMENT=	GStreamer opencv real time computer vision plugin

GST_PLUGIN=	opencv
DIST=		bad

MASTERDIR=	${.CURDIR}/../../multimedia/gstreamer1-plugins

# Clang has issues with Overloaded stuff inside OpenCV
CXXFLAGS+=	-Wno-overloaded-virtual

.include "${MASTERDIR}/Makefile"
