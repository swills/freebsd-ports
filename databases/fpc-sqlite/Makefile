# Created by: Alonso Cardenas Marquez <acm@FreeBSD.rog>
# $FreeBSD: head/databases/fpc-sqlite/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-sqlite

COMMENT=	Free Pascal interface to SQLite

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	SQLITE
OPTIONS_DEFAULT=	SQLITE

SQLITE_USES=	sqlite

.include "${MASTERDIR}/Makefile"
