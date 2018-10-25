# Created by: Andreas Kohn <andreas@syndrom23.de>
# $FreeBSD$
#   $MCom: ports/trunk/devel/libnotify/Makefile 19813 2014-08-15 19:44:33Z gusi $

PORTNAME=	libnotify
PORTVERSION=	0.7.7
PORTREVISION=	1
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Library for desktop notifications

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	gsettings-desktop-schemas>=3.28.0:devel/gsettings-desktop-schemas

USES=		gmake libtool pkgconfig tar:xz
USE_GNOME=	glib20 gdkpixbuf2 introspection:build
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS=	--disable-tests

.include <bsd.port.mk>
