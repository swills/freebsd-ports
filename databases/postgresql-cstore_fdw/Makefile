# Created by: Jov <amutu@amutu.com>
# $FreeBSD: head/databases/postgresql-cstore_fdw/Makefile 473169 2018-06-24 00:54:27Z linimon $

PORTNAME=	cstore_fdw
PORTVERSION=	1.6.0
DISTVERSIONPREFIX=	v
CATEGORIES=	databases
PKGNAMEPREFIX=	postgresql${PGSQL_VER:S/.//}-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Columnar store for analytics with PostgreSQL

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libprotobuf-c.so:devel/protobuf-c

SUB_FILES=	pkg-message

USES=		gmake pgsql:9.3+
LLD_UNSAFE=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	citusdata

WANT_PGSQL=	server

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/cstore_fdw.so

.include <bsd.port.mk>
