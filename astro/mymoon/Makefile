# Created by: Kirill Ponomarew <ponomarew@oberon.net>
# $FreeBSD: head/astro/mymoon/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	mymoon
DISTVERSION=	1.2a
PORTREVISION=	5
CATEGORIES=	astro
MASTER_SITES=	http://makemebad.net/geek/codes/${PORTNAME}/ \
		LOCAL/krion

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Show latitude and longitude of the moon

LIB_DEPENDS=	libnova.so:astro/libnova

WRKSRC=		${WRKDIR}/${PORTNAME}

GNU_CONFIGURE=	yes
USES=		gmake ncurses

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/mymoon

.include <bsd.port.mk>
