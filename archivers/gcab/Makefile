# Created by: kwm@FreeBSD.org
# $FreeBSD: head/archivers/gcab/Makefile 460078 2018-01-27 09:13:06Z kwm $

PORTNAME=	gcab
PORTVERSION=	0.8
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
