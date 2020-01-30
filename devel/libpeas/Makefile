# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD$

PORTNAME=	libpeas
PORTVERSION=	1.24.0
PORTREVISION?=	0
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT?=	Next evolution of the Gedit plugins engine

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	valac:lang/vala

LIBPEAS_SLAVE?=	no

.if ${LIBPEAS_SLAVE} == no
PORTSCOUT=	limitw:1,even
.else
LIB_DEPENDS+=	libpeas-1.0.so:devel/libpeas
PORTSCOUT=	ignore:1
.endif

USES=		gettext gnome meson pkgconfig tar:xz
USE_GNOME=	cairo gtk30 intlhack introspection
USE_LDCONFIG=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip
MESON_ARGS+=	-Dglade_catalog=false
PLIST=          ${.CURDIR}/pkg-plist

.if ${LIBPEAS_SLAVE} == python
USES+=		python:3.6+
USE_PYTHON=	flavors
USE_GNOME+=	pygobject3
BUILD_WRKSRC=	${WRKSRC}/loaders/python3
INSTALL_WRKSRC=	${WRKSRC}/loaders/python3
MESON_ARGS+=	-Dpython3=true
.else
MESON_ARGS+=	-Dpython3=false
.endif

# lua needs lua 5.1 and devel/lua-lgi. The latter is build for lua 5.2 however..
MESON_ARGS+=	-Dpython2=false -Dlua51=false

.include <bsd.port.mk>
