# Created by: Dejan Lesjak <lesi@FreeBSD.org>
# $FreeBSD: head/x11-fonts/libfontenc/Makefile 493439 2019-02-20 20:09:52Z zeising $

PORTNAME=	libfontenc
PORTVERSION=	1.1.4
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	The fontenc Library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

XORG_CAT=	lib
USE_XORG=	xorgproto

CONFIGURE_ARGS=	--with-encodingsdir=${LOCALBASE}/share/fonts/encodings

.include <bsd.port.mk>
