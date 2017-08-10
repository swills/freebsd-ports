# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/sysutils/fpc-uuid/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	sysutils lang
PKGNAMESUFFIX=	-uuid

COMMENT=	Free Pascal uuid unit

USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
