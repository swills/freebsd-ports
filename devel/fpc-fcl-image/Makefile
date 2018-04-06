# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/fpc-fcl-image/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-image

COMMENT=	Free Pascal image loading and conversion libraries (FCL)

USES=		fpc
USE_FPC=	fcl-base fcl-res pasjpeg rtl-objpas

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
