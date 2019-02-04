# Created by: thierry@pompo.net
# $FreeBSD: head/benchmarks/scimark2c/Makefile 491940 2019-02-02 10:30:05Z tobik $

PORTNAME=	scimark2c
DISTVERSION=	2_1
CATEGORIES=	benchmarks
MASTER_SITES=	http://math.nist.gov/scimark2/
DISTNAME=	${PORTNAME:S/2/${DISTVERSION}/}

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	ANSI C version of the SciMark2 benchmark

USES=		zip

NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/scimark2

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/scimark2 ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
