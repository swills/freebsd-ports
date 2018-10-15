# Created by: UMENO Takashi
# $FreeBSD: head/x11-clocks/gtubeclock/Makefile 481492 2018-10-07 20:25:16Z antoine $

PORTNAME=	gtubeclock
PORTVERSION=	0.9.1
PORTREVISION=	13
CATEGORIES=	x11-clocks
MASTER_SITES=	http://www.bonnyswan.com/gtubeclock/downloads/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Nixie tube clock for GNOME

DEPRECATED=	GNOME 2 application
EXPIRATION_DATE=	2018-12-10

USES=		pkgconfig pathfix
USE_XORG=	x11
GNU_CONFIGURE=	yes
USE_GNOME=	gnomeprefix gtk20 libgnomeui

.include <bsd.port.mk>
