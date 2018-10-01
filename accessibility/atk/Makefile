# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/accessibility/atk/Makefile 480951 2018-09-30 11:58:29Z kwm $

PORTNAME=	atk
PORTVERSION=	2.28.1
PORTREVISION?=	0
CATEGORIES=	accessibility devel
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME accessibility toolkit (ATK)

LICENSE=	LGPL20+
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limitw:1,even

USE_LDCONFIG=	yes
USES=		gettext gnome localbase meson pkgconfig tar:xz
USE_GNOME=	glib20 introspection:build

.include <bsd.port.mk>
