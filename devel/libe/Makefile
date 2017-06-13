# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/devel/libe/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	libe
PORTVERSION=	0.7.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://hyperdex.org/src/

MAINTAINER=	vg@FreeBSD.org
COMMENT=	High-performance datastructures and utilities for C++

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/libpo6.pc:devel/libpo6

GNU_CONFIGURE=	yes
USES=		gmake libtool pathfix pkgconfig
USE_LDCONFIG=	yes

ONLY_FOR_ARCHS=	amd64

.include <bsd.port.mk>
