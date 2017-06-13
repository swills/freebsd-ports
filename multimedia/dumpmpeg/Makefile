# Created by: ijliao
# $FreeBSD: head/multimedia/dumpmpeg/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	dumpmpeg
PORTVERSION=	0.6
PORTREVISION=	9
CATEGORIES=	multimedia graphics
MASTER_SITES=	SF

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Dump frames from mpeg movies

LIB_DEPENDS=	libsmpeg.so:multimedia/smpeg

GNU_CONFIGURE=	yes
USE_SDL=	sdl

PLIST_FILES=	bin/dumpmpeg \
		man/man1/dumpmpeg.1.gz

.include <bsd.port.mk>
