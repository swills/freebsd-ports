# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/archivers/gnome-autoar/Makefile 480951 2018-09-30 11:58:29Z kwm $

PORTNAME=	gnome-autoar
PORTVERSION=	0.2.3
CATEGORIES=	archivers
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Glib wrapper around libarchives

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	valac:lang/vala

USES=		gettext-runtime gmake libarchive libtool pkgconfig tar:xz
USE_GNOME=	cairo gdkpixbuf2 gtk30 introspection:build
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
