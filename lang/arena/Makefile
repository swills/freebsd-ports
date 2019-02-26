# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: head/lang/arena/Makefile 493757 2019-02-24 12:47:30Z novel $

PORTNAME=	arena
PORTVERSION=	0.9.13
PORTREVISION=	2
CATEGORIES=	lang
MASTER_SITES=	http://www.minimalinux.org/arena/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C-like scripting language with automatic memory management

GNU_CONFIGURE=	yes

.if defined(WITH_PCRE)
LIB_DEPENDS+=	libpcre.so:devel/pcre
CONFIGURE_ARGS+=	--enable-pcre
.endif

.include <bsd.port.mk>
