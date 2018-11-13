# $FreeBSD: head/multimedia/gstreamer1-plugins-smoothstreaming/Makefile 483887 2018-11-03 11:58:10Z tijl $

PORTREVISION=	0
CATEGORIES=	multimedia

COMMENT=	GStreamer parse and demuliplex a Smooth Streaming manifest into audio/video streams plugin

GST_PLUGIN=	smoothstreaming
DIST=		bad

SMOOTH_GST_DIRS=	gst-libs/gst/isoff

MASTERDIR=	${.CURDIR}/../../multimedia/gstreamer1-plugins

pre-build:
.for dir in ${SMOOTH_GST_DIRS}
	@(cd ${BUILD_WRKSRC}/${dir}; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_FLAGS} ${MAKEFILE} ${_MAKE_JOBS} ${MAKE_ARGS} ${ALL_TARGET})
.endfor

.include "${MASTERDIR}/Makefile"
