# Created by: Stefan Esser
# $FreeBSD: head/sysutils/fusefs-libs3/Makefile 481649 2018-10-09 18:29:02Z swills $

PORTNAME=	fusefs-libs3
DISTVERSIONPREFIX=	fuse-
DISTVERSION=	3.2.5
CATEGORIES=	sysutils

MAINTAINER=	se@FreeBSD.org
COMMENT=	FUSE library version 3 for filesystems implemented in userspace

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		meson
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libfuse
GH_PROJECT=	libfuse

.include <bsd.port.pre.mk>

.if ${OPSYS} == DragonFly
IGNORE=	fusefs has not been implemented on DragonFly
.endif

.include <bsd.port.post.mk>
