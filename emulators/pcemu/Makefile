# Created by: joerg
# $FreeBSD: head/emulators/pcemu/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	pcemu
PORTVERSION=	1.01b
PORTREVISION=	5
CATEGORIES=	emulators
MASTER_SITES=	LOCAL/joerg
DISTNAME=	pcemu1.01alpha

MAINTAINER=	joerg@FreeBSD.org
COMMENT=	8086 PC emulator, by David Hedley

BUILD_DEPENDS=	bdftopcf:x11-fonts/bdftopcf
RUN_DEPENDS=	mkfontscale:x11-fonts/mkfontscale

USE_XORG=	x11 xext
USES=		dos2unix
DOS2UNIX_FILES=	programs/config.sys
MAKE_ENV=	FILESDIR=${FILESDIR} STAGEDIR=${STAGEDIR}
MAKE_ARGS=	CC="${CC}"

.include <bsd.port.mk>
