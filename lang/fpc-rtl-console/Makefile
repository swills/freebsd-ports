# $FreeBSD: head/lang/fpc-rtl-console/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	lang
PKGNAMESUFFIX=	-rtl-console

COMMENT=	Free Pascal console abstraction unit (RTL)

USES=		fpc
USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
