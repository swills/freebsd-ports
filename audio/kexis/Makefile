# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/audio/kexis/Makefile 443519 2017-06-13 16:54:55Z sunpoet $

PORTNAME=	kexis
PORTVERSION=	0.2.2
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/Kexis/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lossless WAV file compressor

USES=		tar:tgz
WRKSRC=		${WRKDIR}/${PORTNAME}
PLIST_FILES=	bin/kexis

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/kexis ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
