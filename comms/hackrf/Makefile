# Created by: Tomasz "CeDeROM" CEDRO (http://www.tomek.cedro.info)
# $FreeBSD: head/comms/hackrf/Makefile 458672 2018-01-10 18:51:08Z swills $

PORTNAME=	hackrf
PORTVERSION=	2017.02.1
CATEGORIES=	comms devel hamradio science security

MAINTAINER=	cederom@tlen.pl
COMMENT=	Low cost open source hardware software radio platform

LICENSE=	GPLv2

USE_GITHUB=	YES
GH_ACCOUNT=	mossmann
GH_TAGNAME=	31a37bd

USES=		cmake:outsource
CMAKE_SOURCE_PATH=	${WRKSRC}/host
CMAKE_ARGS=	-DLIBUSB_LIBRARIES=/usr/lib/libusb.so

USE_LDCONFIG=	yes

.include <bsd.port.mk>
