# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/benchmarks/nosqlbench/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	nosqlbench
PORTVERSION=	0.0.${DATE}
PORTREVISION=	1
CATEGORIES=	benchmarks databases
MASTER_SITES=	LOCAL/vg

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Micro-benchmarking NoSQL storage

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libleveldb.so:databases/leveldb

DATE=		20151214
USES=		cmake:insource tar:bzip2

CONFLICTS=	tarantool-c

post-patch:
	@${REINPLACE_CMD} -e 's|-O3 -march=native||' ${WRKSRC}/CMakeLists.txt \
		${WRKSRC}/third_party/memcached/CMakeLists.txt \
		${WRKSRC}/third_party/tarantool-c/CMakeLists.txt

post-install:
	${INSTALL_DATA} ${WRKSRC}/sources/nosqlbench.conf \
		${STAGEDIR}${PREFIX}/etc/nosqlbench.conf.sample

.include <bsd.port.mk>
