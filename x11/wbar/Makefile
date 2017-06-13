# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/x11/wbar/Makefile 425339 2016-11-04 16:31:24Z nivit $

PORTNAME=	wbar
PORTVERSION=	2.3.4
PORTREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	https://storage.googleapis.com/google-code-archive-downloads/v2/code.google.com/${PORTNAME}/

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Simple and highly customizable quick launch bar

LICENSE=	GPLv3

BUILD_DEPENDS=	intltool-update:textproc/intltool
LIB_DEPENDS=	libImlib2.so:graphics/imlib2

CONFIGURE_ARGS=	--exec-prefix=${PREFIX}

USES=		pkgconfig gettext gmake tar:tgz

GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS_DEFINE=	NLS WBARCONFIG
OPTIONS_DEFAULT=	WBARCONFIG
OPTIONS_SUB=	yes

WBARCONFIG_DESC=	Build the GTK+ configuration interface

NLS_CONFIGURE_ENABLE=	nls
NLS_LIBS=	-lintl

WBARCONFIG_CONFIGURE_ENABLE=	wbar-config
WBARCONFIG_USE=		GNOME=libglade2

PLIST_SUB+=	DESKTOPDIR=${DESKTOPDIR:S,${PREFIX}/,,}

post-install:
	${MV} ${STAGEDIR}${PREFIX}/etc/wbar.d/wbar.desktop ${STAGEDIR}${DESKTOPDIR}/wbar.desktop

.include <bsd.port.mk>
