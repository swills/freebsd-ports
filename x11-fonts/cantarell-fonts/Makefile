# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/x11-fonts/cantarell-fonts/Makefile 437492 2017-04-01 21:47:30Z bapt $

PORTNAME=	cantarell-fonts
PORTVERSION=	0.0.25
CATEGORIES=	x11-fonts gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Cantarell, a Humanist sans-serif font family

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig

USES=		fonts gmake gnome pkgconfig tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-configdir=${PREFIX}/etc/fonts/conf.avail
FONTSDIR=	share/fonts/cantarell
PLIST_SUB=	FONTSDIR=${FONTSDIR}

.include <bsd.port.mk>
