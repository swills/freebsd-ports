# $FreeBSD: head/comms/sunxi-tools/Makefile 477534 2018-08-18 20:42:46Z sunpoet $

PORTNAME=	sunxi-tools
PORTVERSION=	1.4.2
DISTVERSIONPREFIX=	v
CATEGORIES=	comms

MAINTAINER=	manu@FreeBSD.org
COMMENT=	Tools to help hacking Allwinner devices

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BROKEN_mips=		fails to build: unrecognized command line option "-Wno-unused-result"
BROKEN_mips64=		fails to build: unrecognized command line option "-Wno-unused-result"
BROKEN_powerpc64=	fails to build: unrecognized command line option "-Wno-unused-result"

USES=		gmake pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	linux-sunxi

.include <bsd.port.mk>
