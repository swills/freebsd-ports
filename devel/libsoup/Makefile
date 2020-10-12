# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD$

PORTNAME=	libsoup
PORTVERSION=	2.72.0
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	desktop@FreeBSD.org
COMMENT=	SOAP (Simple Object Access Protocol) implementation in C

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	glib-networking>=2.29.18:net/glib-networking \
		valac:lang/vala
LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
		libpsl.so:dns/libpsl \
		libbrotlidec.so:archivers/brotli
RUN_DEPENDS=	glib-networking>=2.29.18:net/glib-networking

PORTSCOUT=	limitw:1,even

USES=		gettext gnome meson localbase pkgconfig \
		python:3.6+,build sqlite tar:xz
USE_GNOME=	glib20 introspection:build libxml2
USE_LDCONFIG=	yes

MESON_ARGS=	-Dsysprof=disabled

LIBVERSION=	1.11.0
PLIST_SUB=	VERSION="2.4" LIBVERSION=${LIBVERSION}

.if defined(SOUP_SLAVE)
EXTRA_PATCHES=	${FILESDIR}/extra-patch-libsoup_meson.build \
		${FILESDIR}/extra-patch-meson.build

LIB_DEPENDS+=	libsoup-2.4.so:devel/libsoup
.else
MESON_ARGS+=	-Dgnome=false
.endif


post-install:
.if defined(SOUP_SLAVE)
	@${RM} -R ${STAGEDIR}${PREFIX}/include/libsoup-2.4/
	@${RM} ${STAGEDIR}${PREFIX}/libdata/pkgconfig/libsoup-2.4.pc
.endif

.include <bsd.port.mk>
