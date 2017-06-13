# Created by: Anders Nordby <anders@FreeBSD.org>
# $FreeBSD: head/audio/resid/Makefile 419808 2016-08-08 09:32:17Z ehaupt $

PORTNAME=	resid
PORTVERSION=	0.16
PORTREVISION=	3
CATEGORIES=	audio emulators
MASTER_SITES=	LOCAL/ehaupt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Cycle-based SID emulator engine

LICENSE=	GPLv2

USES=		libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

CONFIGURE_ARGS=		--enable-shared

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
