# $FreeBSD: head/devel/fpc-fcl-pdf/Makefile 460667 2018-02-02 05:35:20Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-pdf

COMMENT=	Free Pascal pdf (FCL)

USE_FPC=	fcl-base fcl-image fcl-res fcl-xml pasjpeg rtl-objpas

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
