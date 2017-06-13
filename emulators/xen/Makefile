# $FreeBSD: head/emulators/xen/Makefile 418036 2016-07-04 15:29:45Z royger $

PORTNAME=	xen
PORTVERSION=	4.7.0
PORTREVISION=	2
CATEGORIES=	emulators

MAINTAINER=	royger@FreeBSD.org
COMMENT=	Xen Hypervisor meta port

LICENSE=	GPLv2

ONLY_FOR_ARCHS=	amd64

RUN_DEPENDS=	/boot/xen:emulators/xen-kernel \
		xl:sysutils/xen-tools

USES=		metaport

.include <bsd.port.mk>
