# $FreeBSD: head/databases/gom/Makefile 487050 2018-12-09 14:47:15Z kwm $

PORTNAME=	gom
PORTVERSION=	0.3.3
CATEGORIES=	databases gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GObject Data Mapper

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gnome meson pkgconfig python:3.4+ sqlite tar:xz
USE_GNOME=	gdkpixbuf2 glib20 introspection pygobject3

USE_LDCONFIG=	yes

.include <bsd.port.mk>
