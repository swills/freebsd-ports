# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/graphics/fpc-svgalib/Makefile 412346 2016-04-01 14:00:51Z mat $

CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-svgalib

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	Free Pascal interface to the SVGA graphics library

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	SVGA
SVGA_DESC=	Install svgalib low level console graphics library

SVGA_LIB_DEPENDS=	libvga.so:graphics/svgalib

.include "${MASTERDIR}/Makefile"
