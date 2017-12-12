# $FreeBSD: head/databases/tarantool-c/Makefile 455889 2017-12-10 11:25:40Z amdmi3 $

PORTNAME=	tarantool-c
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	databases

MAINTAINER=	vg@FreeBSD.org
COMMENT=	C client for Tarantool 1.6+

LIB_DEPENDS=	libmsgpuck.so:devel/msgpuck

USE_GITHUB=	yes
GH_ACCOUNT=	tarantool
GH_TAGNAME=	a251965

USES=		cmake
CMAKE_ARGS=	-DENABLE_BUNDLED_MSGPUCK=false

post-patch:
	@${REINPLACE_CMD} -e '/-O3 -march=native/d' ${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
