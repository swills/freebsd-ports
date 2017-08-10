# Created by: John Merryweather Cooper et al
# $FreeBSD: head/databases/fpc-postgres/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-postgres

COMMENT=	Free Pascal interface to PostGreSQL

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	PGSQL
PGSQL_DESC=	Install PostgreSQL client
OPTIONS_DEFAULT=	PGSQL

PGSQL_USES=	pgsql

.include "${MASTERDIR}/Makefile"
