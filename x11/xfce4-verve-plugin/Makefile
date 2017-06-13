# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: head/x11/xfce4-verve-plugin/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	verve-plugin
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PKGNAMEPREFIX}${PORTNAME}/${PORTVERSION:R}
PKGNAMEPREFIX=	xfce4-
DISTNAME=	${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Command line plugin for the Xfce Desktop

LICENSE=	GPLv2

LIB_DEPENDS=	libpcre.so:devel/pcre \
	libdbus-glib-1.so:devel/dbus-glib

GNU_CONFIGURE=	yes
USES=		gettext-tools gmake libtool pkgconfig tar:bzip2 xfce
USE_GNOME=	glib20 intltool intlhack
USE_XFCE=	panel
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS=--enable-dbus

OPTIONS_DEFINE=	NLS
NLS_CONFIGURE_ENABLE=	nls
NLS_USES=	gettext-runtime
OPTIONS_SUB=	yes

.include <bsd.port.mk>
