# Created by: Armin Pirkovitsch <armin@frozen-zone.org>
# $FreeBSD: head/devel/libg19draw/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	libg19draw
PORTVERSION=	1.0.0
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	SF/g19linux/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	armin@frozen-zone.org
COMMENT=	G19 draw library

LIB_DEPENDS=	libg19.so:devel/libg19 \
		libfreetype.so:print/freetype2

CONFIGURE_ENV=	LDFLAGS="-L${LOCALBASE}/lib -pthread"

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES=		libtool pkgconfig

PLIST_FILES=	include/libg19draw.h \
		lib/libg19draw.a \
		lib/libg19draw.so \
		lib/libg19draw.so.1 \
		lib/libg19draw.so.1.0.0

.include <bsd.port.mk>
