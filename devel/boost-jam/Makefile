# Created by: Alexander Churanov <churanov.port.maintainer@gmail.com>
# $FreeBSD: head/devel/boost-jam/Makefile 465789 2018-03-28 09:37:38Z tijl $

PORTNAME=	boost-jam
PORTREVISION=	1
COMMENT=	Build tool from the boost.org

PLIST_FILES=	bin/bjam

EXTRACT_AFTER_ARGS=	${DISTNAME}/${WRKSRC_SUBDIR}
MAKE_CMD=	./build.sh
ALL_TARGET=	cc ${WITH_DEBUG:D--debug}
MAKE_FLAGS=	#
_MAKE_JOBS=	#
MAKEFILE=	#

WRKSRC_SUBDIR=	tools/build/src/engine

.include "${.CURDIR}/../boost-all/common.mk"

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bin.*/bjam \
		${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
