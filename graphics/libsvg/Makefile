# Created by: Michael Johnson <ahze@ahze.net>
# $FreeBSD: head/graphics/libsvg/Makefile 412346 2016-04-01 14:00:51Z mat $
#   $MCom: ports/graphics/libsvg/Makefile,v 1.3 2005/07/04 00:11:29 marcus Exp $

PORTNAME=	libsvg
PORTVERSION=	0.1.4
PORTREVISION=	8
CATEGORIES=	graphics
MASTER_SITES=	http://cairographics.org/snapshots/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Parser for SVG content in files or buffers

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libpng.so:graphics/png

GNU_CONFIGURE=	yes
USE_GNOME=	libxml2
USES=		iconv jpeg libtool pathfix pkgconfig
USE_LDCONFIG=	yes
CFLAGS+=	-I${LOCALBASE}/include

PLIST_FILES=	include/svg.h \
		lib/libsvg.a \
		lib/libsvg.so \
		lib/libsvg.so.1 \
		lib/libsvg.so.1.0.0 \
		libdata/pkgconfig/libsvg.pc

.include <bsd.port.mk>
