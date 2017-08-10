# $FreeBSD: head/devel/fpc-fcl-extra/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-extra

COMMENT=	Free Pascal extra libraries (FCL)

USE_FPC=	fcl-base fcl-res rtl-objpas

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
