# Created by: Jeffrey Baitis <jeff@baitis.net>
# $FreeBSD: head/comms/libsdr-gui/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	libsdr-gui
PORTVERSION=	0.1.0
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	comms hamradio

MAINTAINER=	jeff@baitis.net
COMMENT=	GUI functions (e.g. waterfall) for libsdr library

LICENSE=	GPLv2

LIB_DEPENDS=	libfftw3.so:math/fftw3 \
		libfftw3f.so:math/fftw3-float \
		libsdr.so:comms/libsdr

USE_GITHUB=	yes
GH_ACCOUNT=	hmatuschek

USE_QT=		core buildtools_build qmake widgets
USES=		cmake pkgconfig qt:5
USE_LDCONFIG=	yes

.include <bsd.port.mk>
