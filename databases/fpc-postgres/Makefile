# Created by: John Merryweather Cooper et al
# $FreeBSD: head/databases/fpc-postgres/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-postgres

COMMENT=	Free Pascal interface to PostGreSQL

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	PGSQL
PGSQL_DESC=	Install PostgreSQL client
OPTIONS_DEFAULT=	PGSQL

PGSQL_USES=	pgsql

.include "${MASTERDIR}/Makefile"
