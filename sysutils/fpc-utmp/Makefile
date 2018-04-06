# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/sysutils/fpc-utmp/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	sysutils lang
PKGNAMESUFFIX=	-utmp

COMMENT=	Free Pascal unit to gather information from the utmp file

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
