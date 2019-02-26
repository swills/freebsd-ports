# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: head/audio/libcdaudio/Makefile 493757 2019-02-24 12:47:30Z novel $

PORTNAME=	libcdaudio
PORTVERSION=	0.99.12p2
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library for playing audio CDs

USES=		libtool pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libcdaudio.so.1.*

.include <bsd.port.mk>
