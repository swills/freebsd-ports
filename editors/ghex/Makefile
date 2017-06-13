# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/editors/ghex/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	ghex
PORTVERSION=	3.18.0
CATEGORIES=	editors gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME 3 hex editor

BUILD_DEPENDS=	itstool:textproc/itstool

USES=		gettext gmake gnome libtool pathfix pkgconfig tar:xz
USE_GNOME=	gnomeprefix gtk30 intlhack libxml2:build
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--enable-compile-warnings=no
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

GLIB_SCHEMAS=	org.gnome.GHex.gschema.xml

.include <bsd.port.mk>
