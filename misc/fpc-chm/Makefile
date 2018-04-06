# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/misc/fpc-chm/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	misc lang
PKGNAMESUFFIX=	-chm

COMMENT=	Free Pascal unit to manipulate chm files

USES=		fpc
USE_FPC=	fcl-base fcl-xml

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
