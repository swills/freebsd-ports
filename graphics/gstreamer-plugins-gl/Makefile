# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/graphics/gstreamer-plugins-gl/Makefile 441503 2017-05-23 05:03:14Z rezny $

PORTNAME=	gstreamer-plugins-gl
PORTVERSION=	0.10.3
PORTREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	http://gstreamer.freedesktop.org/src/gst-plugins-gl/
DISTNAME=	${PORTNAME:S/gstreamer/gst/}-${PORTVERSION}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	GStreamer OpenGL video plugin

LIB_DEPENDS=	libpng.so:graphics/png

USES=		gettext gmake jpeg libtool pathfix pkgconfig tar:bzip2
USE_LDCONFIG=	yes
USE_GSTREAMER=	yes
USE_XORG=	ice x11
USE_GL=		gl glu glew
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-examples --disable-static
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

PLIST_SUB=	VERSION="0.10"

.include <bsd.port.mk>
