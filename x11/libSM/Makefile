# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libSM/Makefile 483536 2018-10-30 20:10:50Z zeising $

PORTNAME=	libSM
PORTVERSION=	1.2.3
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Session Management library for X11

LICENSE=	MIT

USES=		pathfix
XORG_CAT=	lib
USE_XORG=	ice xorgproto xtrans

CONFIGURE_ARGS+=--disable-docs --without-xmlto

post-patch:
	@${REINPLACE_CMD} '/^SUBDIRS/,/^$$/ \
		s/doc//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
