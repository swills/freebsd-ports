# $FreeBSD: head/graphics/gstreamer1-plugins-opencv/Makefile 446388 2017-07-22 11:35:44Z kwm $

PORTREVISION=	0
CATEGORIES=	graphics

COMMENT=	GStreamer opencv real time computer vision plugin

GST_PLUGIN=	opencv
DIST=		bad

MASTERDIR=	${.CURDIR}/../../multimedia/gstreamer1-plugins

# Clang has issues with Overloaded stuff inside OpenCV
CXXFLAGS+=	-Wno-overloaded-virtual

PLIST=		${.CURDIR}/pkg-plist

.include "${MASTERDIR}/Makefile"
