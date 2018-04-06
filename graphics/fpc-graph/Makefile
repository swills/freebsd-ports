# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/graphics/fpc-graph/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-graph

COMMENT=	Free Pascal interface to graphical applications

USES=		fpc
USE_FPC=	sdl x11 ${ARCH:Mi386:S/i386/pthreads/}

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
