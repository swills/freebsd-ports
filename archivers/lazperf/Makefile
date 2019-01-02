# Created by: lbartoletti <lbartoletti@tuxfamily.org>
# $FreeBSD: head/archivers/lazperf/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	lazperf
DISTVERSION=	1.3.0
PORTREVISION=	1
CATEGORIES=	archivers databases geography

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Alternative LAZ implementation for C++ and JavaScript

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	hobu
GH_PROJECT=	laz-perf

CMAKE_OFF=	WITH_TESTS
NO_ARCH=	yes

post-patch:
	@${RM} ${WRKSRC}/laz-perf/portable_endian.hpp.orig

.include <bsd.port.mk>
