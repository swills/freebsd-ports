# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: head/lang/arena/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	arena
PORTVERSION=	0.9.13
PORTREVISION=	2
CATEGORIES=	lang
MASTER_SITES=	http://www.minimalinux.org/arena/

MAINTAINER=	novel@FreeBSD.org
COMMENT=	C-like scripting language with automatic memory management

GNU_CONFIGURE=	yes

.if defined(WITH_PCRE)
LIB_DEPENDS+=	libpcre.so:devel/pcre
CONFIGURE_ARGS+=	--enable-pcre
.endif

.include <bsd.port.mk>
