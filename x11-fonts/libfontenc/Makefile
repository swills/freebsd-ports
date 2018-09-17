# Created by: Dejan Lesjak <lesi@FreeBSD.org>
# $FreeBSD: head/x11-fonts/libfontenc/Makefile 479538 2018-09-11 18:34:27Z zeising $

PORTNAME=	libfontenc
PORTVERSION=	1.1.3
PORTREVISION=	3
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	The fontenc Library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

XORG_CAT=	lib
USE_XORG=	xorgproto

CONFIGURE_ARGS=	--with-encodingsdir=${LOCALBASE}/share/fonts/encodings

.include <bsd.port.mk>
