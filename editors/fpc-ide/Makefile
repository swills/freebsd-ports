# Created by: John Merryweather Cooper et al
# $FreeBSD: head/editors/fpc-ide/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	editors lang
PKGNAMESUFFIX=	-ide

COMMENT=	Free Pascal integrated IDE/compiler

USES=		fpc
USE_FPC=	chm fv gdbint regexpr rtl-extra rtl-console fcl-xml

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR} ${FPCSRCDIR}/rtl ${FPCSRCDIR}/compiler

.include "${MASTERDIR}/Makefile"
