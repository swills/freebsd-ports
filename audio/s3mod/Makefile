# Created by: ugen
# $FreeBSD: head/audio/s3mod/Makefile 428814 2016-12-18 00:57:19Z marino $

PORTNAME=	s3mod
PORTVERSION=	1.09
DISTVERSIONPREFIX=	v
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	SUNSITE/apps/sound/players

MAINTAINER=	ports@FreeBSD.org
COMMENT=	MOD/S3M player

USES=		alias
ALL_TARGET=	freebsd
PLIST_FILES=	bin/s3mod

post-extract:
	@${CP} ${WRKSRC}/DspDrivers/linux_dsp.c ${WRKSRC}/dsp.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/s3mod ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
