# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/sysutils/cog/Makefile 428142 2016-12-08 17:17:43Z tijl $

PORTNAME=	cog
PORTVERSION=	0.8.0
PORTREVISION=	13
CATEGORIES=	sysutils gnome
MASTER_SITES=	http://www.krakoa.dk/progs/cog/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Program for editing advanced GNOME settings in an easy way

USE_XORG=	x11
USE_GNOME=	gnomeprefix libgnomeui
USES=		gettext gmake pkgconfig
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

PLIST_SUB=	VERSION=${PORTVERSION}

.include <bsd.port.mk>
