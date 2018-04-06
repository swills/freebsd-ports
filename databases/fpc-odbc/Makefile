# Created by: John Merryweather Cooper
# $FreeBSD: head/databases/fpc-odbc/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-odbc

COMMENT=	Free Pascal interface to ODBC

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	ODBC
ODBC_DESC=	Install ODBC library suite for Unix

ODBC_LIB_DEPENDS=	libodbc.so:databases/unixODBC

.include "${MASTERDIR}/Makefile"
