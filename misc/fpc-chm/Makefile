# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/misc/fpc-chm/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	misc lang
PKGNAMESUFFIX=	-chm

COMMENT=	Free Pascal unit to manipulate chm files

USE_FPC=	fcl-base fcl-xml

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
