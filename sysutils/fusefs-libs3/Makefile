# Created by: Stefan Esser
# $FreeBSD: head/sysutils/fusefs-libs3/Makefile 452270 2017-10-17 07:37:56Z se $

PORTNAME=	fusefs-libs3
DISTVERSIONPREFIX=	fuse-
DISTVERSION=	3.2.0
CATEGORIES=	sysutils

MAINTAINER=	se@freebsd.org
COMMENT=	FUSE library version 3 for filesystems implemented in userspace

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		meson
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libfuse
GH_PROJECT=	libfuse
GH_TAGNAME=	d92bf83

.include <bsd.port.pre.mk>

.if ${OPSYS} == DragonFly
IGNORE=	fusefs has not been implemented on DragonFly
.endif

.include <bsd.port.post.mk>
