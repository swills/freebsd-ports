# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/graphics/fpc-graph/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-graph

COMMENT=	Free Pascal interface to graphical applications

USE_FPC=	sdl x11 ${ARCH:Mi386:S/i386/pthreads/}

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
