# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/fpc-fcl-passrc/Makefile 461463 2018-02-11 08:11:41Z antoine $

PORTREVISION=	1
CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-passrc

COMMENT=	Free Pascal language parsing library (FPC)

USE_FPC=	fcl-base fcl-res rtl-objpas

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
