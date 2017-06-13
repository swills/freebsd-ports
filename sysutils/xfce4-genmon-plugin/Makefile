# Created by: Matt Lancereau <ports@FreeBSD.org>
# $FreeBSD: head/sysutils/xfce4-genmon-plugin/Makefile 434822 2017-02-25 15:51:01Z olivierd $

PORTNAME=	xfce4-genmon-plugin
PORTVERSION=	4.0.0
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Generic Monitor Xfce4 panel plugin

LICENSE=	LGPL21

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		gettext gmake libtool pkgconfig tar:bzip2 xfce:gtk3
USE_GNOME=	glib20 gtk30 intltool cairo gdkpixbuf2
USE_XFCE=	panel

.include <bsd.port.mk>
