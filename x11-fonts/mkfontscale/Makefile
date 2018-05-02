# Created by: Pawel Worach
# $FreeBSD: head/x11-fonts/mkfontscale/Makefile 468641 2018-04-29 18:55:00Z yuri $

PORTNAME=	mkfontscale
PORTVERSION=	1.1.3
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Creates an index of scalable font files for X

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libfreetype.so:print/freetype2

XORG_CAT=	app
USE_XORG=	xproto fontenc

CONFIGURE_ARGS+=--disable-maintainer-mode

PLIST_FILES=	bin/mkfontscale man/man1/mkfontscale.1.gz

.include <bsd.port.mk>
