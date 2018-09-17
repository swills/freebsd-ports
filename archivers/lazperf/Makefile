# Created by: lbartoletti <lbartoletti@tuxfamily.org>
# $FreeBSD: head/archivers/lazperf/Makefile 479316 2018-09-09 16:59:37Z sunpoet $

PORTNAME=	lazperf
DISTVERSION=	1.3.0
CATEGORIES=	archivers databases geography

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Alternative LAZ implementation for C++ and JavaScript

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:outsource compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	hobu
GH_PROJECT=	laz-perf

CMAKE_OFF=	WITH_TESTS
NO_ARCH=	yes

post-patch:
	@${RM} ${WRKSRC}/laz-perf/portable_endian.hpp.orig

.include <bsd.port.mk>
