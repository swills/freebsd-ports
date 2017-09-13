# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/lang/fpc-tcl/Makefile 449657 2017-09-11 15:23:16Z gahr $

CATEGORIES=	lang
PKGNAMESUFFIX=	-tcl

COMMENT=	Free Pascal interface to the tcl/tk interpreter

DEPRECATED=		This port depends on Tcl/Tk 8.4 , which is no longer\
			maintained. Please port it to 8.5+
EXPIRATION_DATE=	2017-10-15

USE_FPC=	fcl-base

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	TCL
TCL_DESC=	Install tool commnad language
OPTIONS_DEFAULT=	TCL

TCL_USES=	tk:84,run

.include "${MASTERDIR}/Makefile"
