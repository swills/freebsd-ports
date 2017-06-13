# Created by: kwm@FreeBSD.org
# $FreeBSD: head/archivers/gcab/Makefile 437511 2017-04-02 00:04:21Z bapt $

PORTNAME=	gcab
PORTVERSION=	0.7
CATEGORIES=	archivers gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GObject library to create cabinet files

BUILD_DEPENDS=	vala:lang/vala

USES=		cpe gettext gmake libtool pathfix pkgconfig tar:xz
GNU_CONFIGURE=	yes
USE_GNOME=	glib20 intlhack introspection:build
CPE_VENDOR=	gnome

.include <bsd.port.mk>
