# Created by: ijliao
# $FreeBSD: head/audio/speex/Makefile 428345 2016-12-11 12:12:16Z bapt $

PORTNAME=	speex
DISTVERSION=	1.2.0
PORTEPOCH=	1
CATEGORIES=	audio
MASTER_SITES=	http://downloads.us.xiph.org/releases/speex/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Audio compression format designed for speech

LIB_DEPENDS=	libogg.so:audio/libogg \
		libspeexdsp.so:audio/speexdsp

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		libtool pathfix pkgconfig
USE_LDCONFIG=	yes

.include <bsd.port.mk>
