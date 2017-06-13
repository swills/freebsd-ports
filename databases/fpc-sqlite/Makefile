# Created by: Alonso Cardenas Marquez <acm@FreeBSD.rog>
# $FreeBSD: head/databases/fpc-sqlite/Makefile 414014 2016-04-25 16:13:38Z mat $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-sqlite

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	Free Pascal interface to SQLite

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	SQLITE
OPTIONS_DEFAULT=	SQLITE

SQLITE_USES=	sqlite

.include "${MASTERDIR}/Makefile"
