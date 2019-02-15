# Created by: adamw
# $FreeBSD: head/archivers/liblz4/Makefile 492921 2019-02-14 14:49:18Z olivier $

PORTNAME=	lz4
PORTVERSION=	1.8.3
DISTVERSIONPREFIX=	v
PORTEPOCH=	1
CATEGORIES=	archivers
PKGNAMEPREFIX=	lib

MAINTAINER=	martin@waschbuesch.de
COMMENT=	LZ4 compression library, lossless and very fast

LICENSE=	BSD2CLAUSE GPLv2
LICENSE_COMB=	multi

USES=		gmake pkgconfig
USE_GITHUB=	yes
USE_LDCONFIG=	yes

MAKE_ENV+=	TARGET_ARCH=
MAKE_ARGS=	PREFIX="${PREFIX}" \
		INSTALL_PROGRAM="${INSTALL_PROGRAM}" \
		MANDIR="${MAN1PREFIX}/man"
PLIST_SUB=	PORTVERSION=${PORTVERSION}

.include <bsd.port.mk>
