# Created by: Ade Lovett <ade@FreeBSD.org>
# $FreeBSD: head/www/libgtkhtml/Makefile 428152 2016-12-08 19:52:19Z tijl $
#   $MCom: ports/www/libgtkhtml/Makefile,v 1.41 2008/08/23 18:23:00 mezz Exp $

PORTNAME=	libgtkhtml
PORTVERSION=	2.11.1
PORTREVISION=	8
CATEGORIES=	www gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Lightweight HTML rendering/printing/editing engine

USES=		gmake libtool:keepla pathfix pkgconfig tar:bzip2
USE_GNOME=	gnomeprefix libxslt gnomevfs2
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
