# Created by: Gustau Perez <gustau.perez@gmail.com>
# $FreeBSD: head/net/uhttpmock/Makefile 437757 2017-04-04 20:55:05Z bapt $

PORTNAME=	uhttpmock
PORTVERSION=	0.5.1
CATEGORIES=	net gnome
MASTER_SITES=	http://tecnocode.co.uk/downloads/uhttpmock/
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	HTTP web service mocking library for GNOME

BUILD_DEPENDS=	gnome-autogen.sh:devel/gnome-common \
		vapigen:lang/vala \
		gtkdoc-rebase:textproc/gtk-doc
LIB_DEPENDS=	libsoup-2.4.so:devel/libsoup

USES=		gettext gmake libtool pathfix pkgconfig tar:xz
USE_GNOME=	gnomeprefix gtk20 introspection:build
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
