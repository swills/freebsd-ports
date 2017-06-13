# Created by: Olivier Duchateau
# $FreeBSD: head/math/pantheon-calculator/Makefile 436494 2017-03-19 14:02:23Z rene $

PORTNAME=	pantheon-calculator
PORTVERSION=	0.1.2
CATEGORIES=	math
MASTER_SITES=	https://launchpadlibrarian.net/303135059/ \
	https://launchpad.net/${PORTNAME}/0.4-loki/${PORTVERSION}/+download/
DIST_SUBDIR=	pantheon

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple calculator written in Vala

LICENSE=	GPLv3

BUILD_DEPENDS=	valac:lang/vala
LIB_DEPENDS=	libgranite.so:x11-toolkits/granite \
	libgee-0.8.so:devel/libgee

USES=	cmake:outsource pkgconfig gettext tar:xz
USE_GNOME=	glib20 gtk30 cairo gdkpixbuf2 intltool

GLIB_SCHEMAS=	org.pantheon.calculator.gschema.xml

.include <bsd.port.mk>
