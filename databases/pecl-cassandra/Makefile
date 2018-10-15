# $FreeBSD: head/databases/pecl-cassandra/Makefile 481778 2018-10-11 02:16:16Z swills $

PORTNAME=	cassandra
PORTVERSION=	1.3.2
CATEGORIES=	databases

MAINTAINER=	daniel@blodan.se
COMMENT=	Extension to access Cassandra

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libuv.so:devel/libuv \
		libcassandra.so:databases/cassandra-cpp-driver \
		libgmp.so:math/gmp

USES=		php:pecl localbase

.include <bsd.port.mk>
