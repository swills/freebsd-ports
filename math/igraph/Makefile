# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/math/igraph/Makefile 424427 2016-10-21 15:21:13Z mat $

PORTNAME=	igraph
PORTVERSION=	0.7.1
CATEGORIES=	math
MASTER_SITES=	http://igraph.org/nightly/get/c/

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Package For Manipulating Undirected And Directed Graphs

LICENSE=	GPLv2

LIB_DEPENDS=	libgmp.so:math/gmp

GNU_CONFIGURE=	yes
USES=		gmake libtool pathfix
USE_GNOME=	libxml2
CONFIGURE_ARGS+=	--enable-gmp
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=	CFLAGS="${CFLAGS}" LDFLAGS="${LDFLAGS}"
USE_LDCONFIG=	yes

.include <bsd.port.pre.mk>

.if ${ARCH} == "sparc64"
BROKEN=		Does not compile on sparc64: uses i386 asm
.endif

.include <bsd.port.post.mk>
