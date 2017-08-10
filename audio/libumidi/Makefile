# Created by: Hans Petter Selasky <hselasky@FreeBSD.org>
# $FreeBSD: head/audio/libumidi/Makefile 447349 2017-08-04 18:15:04Z kwm $

PORTNAME=	libumidi
PORTVERSION=	2.0.14
CATEGORIES=	audio
MASTER_SITES=	http://www.selasky.org/hans_petter/distfiles/ \
		http://home.selasky.org:8192/distfiles/

MAINTAINER=	hselasky@FreeBSD.org
COMMENT=	Universal general purpose MIDI library

LICENSE=	BSD2CLAUSE

OPTIONS_DEFINE=	DEBUG JACK
OPTIONS_DEFAULT=JACK

USES=		tar:bzip2 uidfix

JACK_MAKE_ARGS=	" HAVE_JACK=YES"
JACK_LIB_DEPENDS=	libjack.so:audio/jack
DEBUG_MAKE_ARGS=	" HAVE_DEBUG=YES"
MAKE_ARGS+=" HAVE_MAN=YES"

.include <bsd.port.mk>
