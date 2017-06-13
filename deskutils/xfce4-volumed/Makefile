# Created by: Sergey V. Dyatko <sergey.dyatko@gmail.com>
# $FreeBSD: head/deskutils/xfce4-volumed/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	xfce4-volumed
PORTVERSION=	0.1.13
PORTREVISION=	2
CATEGORIES=	deskutils xfce
MASTER_SITES=	XFCE/src/apps/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	sergey.dyatko@gmail.com
COMMENT=	Volume management daemon for the Xfce desktop

LICENSE=	GPLv3

LIB_DEPENDS=	libnotify.so:devel/libnotify \
		libkeybinder.so:x11/keybinder

USES=		pkgconfig gmake xfce tar:bzip2
GNU_CONFIGURE=	yes
USE_GNOME=	glib20
USE_GSTREAMER=	yes
USE_XFCE=	xfconf

.include <bsd.port.mk>
