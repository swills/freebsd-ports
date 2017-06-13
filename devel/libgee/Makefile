# Created by: Frank Steinborn <steinex@nognu.de>
# $FreeBSD: head/devel/libgee/Makefile 442378 2017-06-02 11:55:08Z kwm $

PORTNAME=	libgee
PORTVERSION=	0.18.1
CATEGORIES=	devel
MASTER_SITES=	GNOME

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	GObject collection library

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	valac:lang/vala

PORTSCOUT=	limitw:1,even

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-introspection=yes
USES=		gettext gmake libtool pathfix pkgconfig tar:xz
USE_GNOME=	glib20 introspection:build
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
