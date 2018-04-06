# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/fpc-fcl-registry/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-registry

COMMENT=	Free Pascal emulation of Windows registry (FCL)

USES=		fpc
USE_FPC=	fcl-base fcl-xml

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
