# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/multimedia/libde265/Makefile 449591 2017-09-10 20:55:38Z gerald $

PORTNAME=	libde265
PORTVERSION=	1.0.2
PORTREVISION=	2
DISTVERSIONPREFIX=	v
CATEGORIES=	multimedia

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Open source h.265 video codec

USE_GITHUB=	yes
GH_ACCOUNT=	strukturag

USES=		autoreconf compiler:c++11-lib libtool pathfix pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-sherlock265 --disable-dec265

BROKEN_armv6=		fails to compile: invokes x86 assembler

.include <bsd.port.mk>
