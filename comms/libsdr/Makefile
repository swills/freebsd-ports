# Created by: Jeffrey Baitis <jeff@baitis.net>
# $FreeBSD: head/comms/libsdr/Makefile 421635 2016-09-09 19:42:46Z amdmi3 $

PORTNAME=	libsdr
PORTVERSION=	0.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	comms hamradio

MAINTAINER=	jeff@baitis.net
COMMENT=	Simple software defined radio (SDR) library

LICENSE=	GPLv2

LIB_DEPENDS=	libportaudio.so:audio/portaudio \
		libfftw3.so:math/fftw3 \
		libfftw3f.so:math/fftw3-float \
		librtlsdr.so:comms/rtl-sdr

USE_GITHUB=	yes
GH_ACCOUNT=	hmatuschek

MAKE_JOBS_UNSAFE=	yes
USES=		cmake pkgconfig
CMAKE_ARGS+=-DCMAKE_BUILD_TYPE=RELEASE
USE_LDCONFIG=	yes

.include <bsd.port.mk>
