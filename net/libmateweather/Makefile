# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/net/libmateweather/Makefile 445014 2017-07-04 11:44:30Z kwm $

PORTNAME=	libmateweather
PORTVERSION=	1.18.1
CATEGORIES=	net mate
MASTER_SITES=	MATE
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Library to accessing online weather informations

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libsoup-2.4.so:devel/libsoup

PORTSCOUT=	limitw:1,even

USES=		gettext gmake libtool localbase pathfix pkgconfig tar:xz
USE_GNOME=	cairo gnomeprefix gtk30 intltool libxml2
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

GLIB_SCHEMAS=	org.mate.weather.gschema.xml

.include <bsd.port.mk>
