# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/fpc-symbolic/Makefile 479406 2018-09-10 13:14:50Z mat $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-symbolic

COMMENT=	FreePascal unit for simple expression parsing and evaluating

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	DOCS

.include "${MASTERDIR}/Makefile"
