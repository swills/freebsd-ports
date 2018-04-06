# Created by: Alonso Cardenas Marquez <acm@FreeBSD.rog>
# $FreeBSD: head/databases/fpc-sqlite/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-sqlite

COMMENT=	Free Pascal interface to SQLite

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	SQLITE
OPTIONS_DEFAULT=	SQLITE

SQLITE_USES=	sqlite

.include "${MASTERDIR}/Makefile"
