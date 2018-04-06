# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/sysutils/fpc-users/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	sysutils lang
PKGNAMESUFFIX=	-users

COMMENT=	Free Pascal interface to manipulate system users

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
