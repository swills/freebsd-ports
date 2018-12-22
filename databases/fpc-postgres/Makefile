# Created by: John Merryweather Cooper et al
# $FreeBSD: head/databases/fpc-postgres/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTREVISION=	1
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
