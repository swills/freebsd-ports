# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/sysutils/fpc-uuid/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	sysutils lang
PKGNAMESUFFIX=	-uuid

COMMENT=	Free Pascal uuid unit

USES=		fpc
USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
