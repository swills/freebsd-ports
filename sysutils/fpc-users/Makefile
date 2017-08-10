# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/sysutils/fpc-users/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	sysutils lang
PKGNAMESUFFIX=	-users

COMMENT=	Free Pascal interface to manipulate system users

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
