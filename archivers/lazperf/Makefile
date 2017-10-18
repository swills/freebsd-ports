# Created by: lbartoletti <lbartoletti@tuxfamily.org>
# $FreeBSD: head/archivers/lazperf/Makefile 450694 2017-09-26 19:13:49Z girgen $

PORTNAME=	lazperf
PORTVERSION=	1.1.0
CATEGORIES=	archivers databases geography

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Alternative LAZ implementation for C++ and JavaScript

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake
CMAKE_ARGS+=	-DWITH_TESTS:BOOL=FALSE

USE_GITHUB=	yes
GH_ACCOUNT=	hobu
GH_PROJECT=	laz-perf

post-build:
	${RM} ${WRKSRC}/laz-perf/portable_endian.hpp.orig
.include <bsd.port.mk>
