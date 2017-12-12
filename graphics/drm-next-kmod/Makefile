# Created by: Johannes Dieterich <jmd@FreeBSD.org>
# $FreeBSD: head/graphics/drm-next-kmod/Makefile 456080 2017-12-12 02:45:33Z jmd $

PORTNAME=	drm-next-kmod
PORTVERSION=	g20171006
PORTREVISION=	1
CATEGORIES=	graphics

MAINTAINER=	jmd@FreeBSD.org
COMMENT=	DRM modules for the linuxkpi-based KMS components

LICENSE=	BSD2CLAUSE MIT GPLv2
LICENSE_COMB=	multi

ONLY_FOR_ARCHS=	amd64
ONLY_FOR_ARCHS_REASON=	the new KMS components are only supported on amd64

RUN_DEPENDS=	gpu-firmware-kmod>=g20170403:graphics/gpu-firmware-kmod

OPTIONS_DEFINE=	DEBUG

USES=		kmod uidfix

USE_GITHUB=	yes
GH_ACCOUNT=	FreeBSDDesktop
GH_PROJECT=	kms-drm
GH_TAGNAME=	63426fd

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD && ${OSVERSION} < 1200045
IGNORE=		not supported on 11.x or older, no kernel support
.endif
.if ${OPSYS} != FreeBSD
IGNORE=		not supported on anything but FreeBSD (missing linuxkpi functionality)
.endif

.include <bsd.port.mk>
