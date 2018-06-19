# $FreeBSD: head/comms/sunxi-tools/Makefile 472665 2018-06-18 01:48:46Z linimon $

PORTNAME=	sunxi-tools
PORTVERSION=	1.4.2
DISTVERSIONPREFIX=	v
CATEGORIES=	comms

MAINTAINER=	manu@freebsd.org
COMMENT=	Tools to help hacking Allwinner devices

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BROKEN_powerpc64=	fails to build: unrecognized command line option "-Wno-unused-result"

USES=		gmake pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	linux-sunxi

.include <bsd.port.mk>
