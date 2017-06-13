# Created by: FreeBSD GNOME Team <gnome@freebsd.org>
# $FreeBSD: head/games/hitori/Makefile 441065 2017-05-17 08:44:31Z kwm $

PORTNAME=	hitori
PORTVERSION=	3.22.3
CATEGORIES=	games gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Hitori

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	itstool:textproc/itstool \
		appstream-util:devel/appstream-glib

PORTSCOUT=	limitw:1,even

USES=		gettext gmake localbase pathfix pkgconfig \
		tar:xz
USE_GNOME=	cairo gtk30 librsvg2 libxml2:build
INSTALLS_ICONS=	yes
GNU_CONFIGURE=	yes

GLIB_SCHEMAS=	org.gnome.hitori.gschema.xml

.include <bsd.port.mk>
