# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/textproc/fpc-aspell/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	textproc lang
PKGNAMESUFFIX=	-aspell

COMMENT=	Interface to aspell spelling checker

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	ASPELL
OPTIONS_DEFAULT=	ASPELL

.include "${MASTERDIR}/Makefile"
