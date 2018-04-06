# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/databases/fpc-fpindexer/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-fpindexer

COMMENT=	Database indexer with database/flat file backend

USES=		fpc
USE_FPC=	chm dblib fcl-base fcl-db fcl-json fcl-xml ibase mysql odbc \
		oracle postgres pxlib sqlite rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
