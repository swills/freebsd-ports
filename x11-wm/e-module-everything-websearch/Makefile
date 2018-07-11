# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/x11-wm/e-module-everything-websearch/Makefile 474410 2018-07-10 20:42:59Z gblach $

PORTNAME=	e-module-everything-websearch
PORTVERSION=	20140818
PORTREVISION=	2
CATEGORIES=	x11-wm enlightenment
MASTER_SITES=	LOCAL/gblach/enlightenment/
DIST_SUBDIR=	enlightenment

MAINTAINER=	enlightenment@FreeBSD.org
COMMENT=	Enlightenment websearch plugin for the "everything" module

BROKEN=		Not compatible with Enlightenment 0.22

BUILD_DEPENDS=	enlightenment:x11-wm/enlightenment
RUN_DEPENDS=	enlightenment:x11-wm/enlightenment
LIB_DEPENDS=	libcurl.so:ftp/curl

GNU_CONFIGURE=	yes
USES=		gmake libtool pkgconfig tar:xz
INSTALL_TARGET=	install-strip

.include "../enlightenment/Makefile.plist"

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes
NLS_USES=	gettext
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
