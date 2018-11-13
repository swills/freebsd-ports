# Created by: Stefan Esser
# $FreeBSD: head/sysutils/fusefs-libs3/Makefile 484802 2018-11-12 12:46:48Z se $

PORTNAME=	fusefs-libs3
DISTVERSIONPREFIX=	fuse-
DISTVERSION=	3.3.0
CATEGORIES=	sysutils

MAINTAINER=	se@FreeBSD.org
COMMENT=	FUSE library version 3 for filesystems implemented in userspace

LICENSE=	GPLv2 LGPL21
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		meson
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libfuse
GH_PROJECT=	libfuse
GH_TAGNAME=	11d9ed6

.include <bsd.port.pre.mk>

.if ${OPSYS} == DragonFly
IGNORE=	fusefs has not been implemented on DragonFly
.endif

.include <bsd.port.post.mk>
