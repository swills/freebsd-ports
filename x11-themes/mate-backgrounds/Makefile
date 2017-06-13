# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/x11-themes/mate-backgrounds/Makefile 407209 2016-01-25 12:31:21Z kwm $

PORTNAME=	mate-backgrounds
PORTVERSION=	1.12.0
CATEGORIES=	x11-themes graphics mate
MASTER_SITES=	MATE
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Collection of backgrounds for MATE

PORTSCOUT=	limitw:1,even

USES=		gettext gmake pathfix tar:xz
USE_GNOME=	glib20 intlhack
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
