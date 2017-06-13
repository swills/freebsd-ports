# Created by: Alexander Nusov <alexander.nusov@nfvexpress.com>
# $FreeBSD: head/devel/liberasurecode/Makefile 438101 2017-04-09 12:03:41Z novel $

PORTNAME=	liberasurecode
PORTVERSION=	1.4.0
CATEGORIES=	devel

MAINTAINER=	alexander.nusov@nfvexpress.com
COMMENT=	Unified Erasure Coding interface for common storage workloads

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	openstack

USES=		gmake pkgconfig autoreconf libtool
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-pkgconfigdir="${PREFIX}/libdata/pkgconfig" \
		--disable-werror

TEST_TARGET=	test

.include <bsd.port.mk>
