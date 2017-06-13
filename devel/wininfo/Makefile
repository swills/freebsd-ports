# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: head/devel/wininfo/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	wininfo
PORTVERSION=	0.7
PORTREVISION=	11
CATEGORIES=	devel
MASTER_SITES=	http://www.freedesktop.org/software/wininfo/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Window information utility

USE_XORG=	xext xrender xinerama xrandr xi xfixes xcursor \
		xcomposite x11 xres
USE_GNOME=	gtk20 gnomeprefix
GNU_CONFIGURE=	yes
USES=		pkgconfig

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
