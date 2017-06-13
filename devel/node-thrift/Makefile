# Created by: Valery Komarov <komarov@valerka.net>
# $FreeBSD: head/devel/node-thrift/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	thrift
PORTVERSION=	${THRIFT_PORTVERSION}
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	APACHE/thrift/${PORTVERSION}
PKGNAMEPREFIX=	node-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Node.js bindings for the Apache Thrift RPC system

RUN_DEPENDS=	node:www/node

NO_BUILD=	yes
NO_ARCH=	yes
DISTINFO_FILE=	${.CURDIR}/../thrift/distinfo

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/node_modules/thrift
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/node
	${CP} -R ${WRKSRC}/lib/nodejs/* \
		${STAGEDIR}${PREFIX}/lib/node_modules/thrift
	${LN} -s ${PREFIX}/lib/node_modules/thrift/lib/thrift ${STAGEDIR}${PREFIX}/lib/node

.include "${.CURDIR}/../thrift/bsd.thrift.mk"
.include <bsd.port.mk>
