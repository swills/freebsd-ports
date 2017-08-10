# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/archivers/fpc-bzip2/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	archivers lang
PKGNAMESUFFIX=	-bzip2

COMMENT=	Free Pascal bzip2 unit

USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
