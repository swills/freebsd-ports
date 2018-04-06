# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/graphics/fpc-svgalib/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-svgalib

COMMENT=	Free Pascal interface to the SVGA graphics library

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	SVGA
SVGA_DESC=	Install svgalib low level console graphics library

SVGA_LIB_DEPENDS=	libvga.so:graphics/svgalib

.include "${MASTERDIR}/Makefile"
