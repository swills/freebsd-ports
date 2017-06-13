# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/audio/gmpc-albumview/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	gmpc-albumview
PORTVERSION=	11.8.16
PORTREVISION=	4
CATEGORIES=	audio
MASTER_SITES=	http://download.sarine.nl/Programs/gmpc/${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Draws all album covers

LIB_DEPENDS=	libmpd.so:audio/libmpd
BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gmpc.pc:audio/gmpc
RUN_DEPENDS=	gmpc:audio/gmpc

GNU_CONFIGURE=	yes
USE_GNOME=	glib20 gtk20 intltool
USES=		gettext gmake libtool pkgconfig
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
