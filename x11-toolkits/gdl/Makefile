# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/gdl/Makefile 480951 2018-09-30 11:58:29Z kwm $

PORTNAME=	gdl
PORTVERSION=	3.28.0
CATEGORIES=	x11-toolkits gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Components intended to be shared between GNOME development tools

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limitw:1,even

USE_GNOME=	cairo gdkpixbuf2 gtk30 intltool introspection:build libxml2
USES=		gettext gmake gnome libtool localbase pathfix pkgconfig tar:xz
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
