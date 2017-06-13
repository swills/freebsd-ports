# Created by: John Merryweather Cooper
# $FreeBSD: head/databases/fpc-odbc/Makefile 412346 2016-04-01 14:00:51Z mat $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-odbc

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	Free Pascal interface to ODBC

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	ODBC
ODBC_DESC=	Install ODBC library suite for Unix

ODBC_LIB_DEPENDS=	libodbc.so:databases/unixODBC

.include "${MASTERDIR}/Makefile"
