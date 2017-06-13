# Created by: Phil Oleson
# $FreeBSD: head/multimedia/dv2sub/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	dv2sub
PORTVERSION=	0.3
PORTREVISION=	5
CATEGORIES=	multimedia
MASTER_SITES=	SF

MAINTAINER=	oz@nixil.net
COMMENT=	Extracts info or subtitles from DV stream

LIB_DEPENDS=	libdv.so:multimedia/libdv

GNU_CONFIGURE=	yes
USES=		pkgconfig

PLIST_FILES=	bin/dv2sub man/man1/dv2sub.1.gz

post-patch:
	@${REINPLACE_CMD} -e 's/void foo(void)//' ${WRKSRC}/configure

.include <bsd.port.mk>
