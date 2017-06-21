# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/audio/libaiff/Makefile 443521 2017-06-13 16:55:04Z sunpoet $

PORTNAME=	libaiff
PORTVERSION=	5.0
DISTVERSIONSUFFIX=	-release
CATEGORIES=	audio
MASTER_SITES=	SF/aifftools/${PORTNAME}/LibAiff%20${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Read and write AIFF files

GNU_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

PLIST_FILES=	lib/${PORTNAME}.a include/${PORTNAME}/config.h include/${PORTNAME}/endian.h \
		include/${PORTNAME}/${PORTNAME}.h include/${PORTNAME}/config.vc.h

post-patch:
	@${REINPLACE_CMD} -e 's/install: libaiff.a/install:/' \
	${WRKSRC}/${MAKEFILE}.in

.include <bsd.port.mk>
