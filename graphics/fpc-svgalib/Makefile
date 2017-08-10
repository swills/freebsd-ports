# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/graphics/fpc-svgalib/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-svgalib

COMMENT=	Free Pascal interface to the SVGA graphics library

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	SVGA
SVGA_DESC=	Install svgalib low level console graphics library

SVGA_LIB_DEPENDS=	libvga.so:graphics/svgalib

.include "${MASTERDIR}/Makefile"
