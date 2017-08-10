# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/fpc-fcl-passrc/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-passrc

COMMENT=	Free Pascal language parsing library (FPC)

USE_FPC=	fcl-base fcl-res rtl-objpas

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
