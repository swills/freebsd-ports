# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/fpc-fcl-xml/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-xml

COMMENT=	Free Pascal XML and DOM library (FCL)

USE_FPC=	fcl-base fcl-res rtl-objpas iconvenc
USE_FPC_RUN=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
