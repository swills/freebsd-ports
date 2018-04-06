# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/archivers/fpc-bzip2/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	archivers lang
PKGNAMESUFFIX=	-bzip2

COMMENT=	Free Pascal bzip2 unit

USES=		fpc
USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
