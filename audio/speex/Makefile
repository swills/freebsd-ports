# Created by: ijliao
# $FreeBSD: head/audio/speex/Makefile 474429 2018-07-11 09:07:40Z amdmi3 $

PORTNAME=	speex
DISTVERSION=	1.2.0
PORTEPOCH=	1
CATEGORIES=	audio
MASTER_SITES=	http://downloads.us.xiph.org/releases/speex/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Audio compression format designed for speech

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libogg.so:audio/libogg \
		libspeexdsp.so:audio/speexdsp

USES=		libtool pathfix pkgconfig
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

.include <bsd.port.mk>
