# $FreeBSD: head/devel/fpc-fcl-pdf/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-pdf
PORTREVISION=	1

COMMENT=	Free Pascal pdf (FCL)

USES=		fpc
USE_FPC=	fcl-base fcl-image fcl-res fcl-xml pasjpeg rtl-objpas

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
