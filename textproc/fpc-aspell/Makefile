# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/textproc/fpc-aspell/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	textproc lang
PKGNAMESUFFIX=	-aspell

COMMENT=	Interface to aspell spelling checker

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	ASPELL
OPTIONS_DEFAULT=	ASPELL

.include "${MASTERDIR}/Makefile"
