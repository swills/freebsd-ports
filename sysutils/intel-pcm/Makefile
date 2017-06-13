# Created by: Adrian Chadd
# $FreeBSD: head/sysutils/intel-pcm/Makefile 432423 2017-01-25 15:46:41Z dbn $

PORTNAME=	intel-pcm
PORTVERSION=	2.11.1
CATEGORIES=	sysutils

MAINTAINER=	imp@FreeBSD.org
COMMENT=	Process Count Monitor (PCM) for Intel processors

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake

ONLY_FOR_ARCHS=	i386 amd64

USE_GITHUB=	yes
GH_ACCOUNT=	opcm
GH_PROJECT=	pcm
GH_TAGNAME=	5581ad7

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/*.x ${STAGEDIR}${PREFIX}/sbin

.include <bsd.port.mk>
