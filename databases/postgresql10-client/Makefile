# Created by: Palle Girgensohn <girgen@FreeBSD.org>
# $FreeBSD: head/databases/postgresql10-client/Makefile 492989 2019-02-15 11:02:22Z girgen $

PORTNAME=	postgresql
PORTREVISION=	0

COMMENT=	PostgreSQL database (client)

MASTERDIR=	${.CURDIR}/../postgresql10-server

BUILD_DIRS=	config src/include src/interfaces src/port \
		src/bin/pg_dump src/bin/psql src/bin/scripts src/bin/pg_config \
		src/bin/pgbench doc src/makefiles src/test/regress
INSTALL_DIRS=	${BUILD_DIRS}

CLIENT_ONLY=	yes
COMPONENT=	-client
USE_LDCONFIG=	yes
USES=		pkgconfig

.include "${MASTERDIR}/Makefile"
