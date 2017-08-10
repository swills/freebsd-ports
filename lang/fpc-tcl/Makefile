# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/lang/fpc-tcl/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	lang
PKGNAMESUFFIX=	-tcl

COMMENT=	Free Pascal interface to the tcl/tk interpreter

USE_FPC=	fcl-base

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	TCL
TCL_DESC=	Install tool commnad language
OPTIONS_DEFAULT=	TCL

TCL_USES=	tk:84,run

.include "${MASTERDIR}/Makefile"
