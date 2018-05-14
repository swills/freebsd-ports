# $FreeBSD: head/x11/xset/Makefile 469548 2018-05-10 14:24:33Z zeising $

PORTNAME=	xset
PORTVERSION=	1.2.4
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	User preference utility for X

XORG_CAT=	app
USE_XORG=	xmuu xproto x11 xext xfontcache
CONFIGURE_ARGS=	--without-xf86misc

PLIST_FILES=	bin/xset man/man1/xset.1.gz
.include <bsd.port.mk>
