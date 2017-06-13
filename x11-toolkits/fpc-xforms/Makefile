# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/fpc-xforms/Makefile 412351 2016-04-01 14:33:55Z mat $

CATEGORIES=	x11-toolkits lang
PKGNAMESUFFIX=	-xforms

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	X-Forms interface for Free Pascal

USE_FPC=	x11

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	EXAMPLES XFORMS
XFORMS_DESC=	Install xforms graphical user interface toolkit
OPTIONS_DEFAULT=	XFORMS

XFORMS_LIB_DEPENDS=	libforms.so:x11-toolkits/xforms

.include "${MASTERDIR}/Makefile"
