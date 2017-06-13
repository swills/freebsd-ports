# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/devel/libgsf/Makefile 437505 2017-04-01 22:59:22Z bapt $

PORTNAME=	libgsf
PORTVERSION=	1.14.41
CATEGORIES=	devel
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Extensible I/O abstraction for dealing with structured file formats

USES=		gettext gmake libtool localbase pathfix pkgconfig tar:xz
USE_GNOME=	gdkpixbuf2 intlhack introspection:build libxml2
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS=	--enable-introspection

.include <bsd.port.mk>
