# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/databases/fpc-fpindexer/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTREVISION=	1
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
