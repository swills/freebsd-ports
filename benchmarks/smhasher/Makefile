# Created by: gnn
# $FreeBSD: head/benchmarks/smhasher/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	smhasher
PORTVERSION=	1.0
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	benchmarks

MAINTAINER=	gnn@FreeBSD.org
COMMENT=	Hash Algorithm Benchmarking

LICENSE=	MIT

BROKEN_powerpc64=	fails to compile: City.cpp: byteswap.h: No such file or directory

USE_GITHUB=	yes
GH_ACCOUNT=	gvnn3

USES=		cmake:insource

PLIST_FILES=	bin/SMHasher

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/SMHasher ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
