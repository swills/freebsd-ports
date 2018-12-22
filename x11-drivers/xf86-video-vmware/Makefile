# $FreeBSD: head/x11-drivers/xf86-video-vmware/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	xf86-video-vmware
PORTVERSION=	13.3.0
PORTREVISION=	4
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org vmware display driver

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	The vmware gfx protocol is only supported on x86-compatible architectures.

XORG_CAT=	driver

.include <bsd.port.options.mk>

.if ${ARCH} == i386
USE_GCC=	any
.endif

.include <bsd.port.mk>
