# Created by: John Merryweather Cooper et al
# $FreeBSD: head/editors/fpc-ide/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	editors lang
PKGNAMESUFFIX=	-ide

COMMENT=	Free Pascal integrated IDE/compiler

USE_FPC=	chm fv gdbint regexpr rtl-extra rtl-console fcl-xml

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR} ${FPCSRCDIR}/rtl ${FPCSRCDIR}/compiler

.include "${MASTERDIR}/Makefile"
