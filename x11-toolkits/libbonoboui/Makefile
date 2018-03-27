# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/libbonoboui/Makefile 465635 2018-03-26 20:53:07Z cmt $

PORTNAME=	libbonoboui
PORTVERSION=	2.24.5
PORTREVISION=	1
CATEGORIES=	x11-toolkits gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GUI frontend to the libbonobo component of GNOME 2

USES+=		tar:bzip2

.if !defined(REFERENCE_PORT)

USES+=		gettext gmake libtool:keepla localbase pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_GNOME=	gnomeprefix intlhack \
		libgnomecanvas libgnome referencehack
USE_LDCONFIG=	yes
LDFLAGS+=	-lpthread
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>

.endif
